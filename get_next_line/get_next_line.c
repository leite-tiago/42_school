/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:57:00 by tborges-          #+#    #+#             */
/*   Updated: 2024/08/09 00:34:32 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *line)	// ler a linha para o buffer e guardar em line
{
	char	*buffer;
	ssize_t	bytes_read;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(line, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	return (line);
}

char	*get_line(char *line)	// "polir" a linha
{
	char	*str;
	int		i;

	i = 0;
	if (!line[i])
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	str = (char *)malloc(i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*new_line(char *line)	// limpar linha antiga e guardar o que estava depois do \n
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])	// se não houver nada depois do \n podemos limpar a linha toda
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * ft_strlen(line) - i + 1);
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])		// guardar o que estava depois do \n
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = read_line(fd, line);
	if (!line)
		return (NULL);
	next_line = get_line(line);
	line = new_line(line);
	return (next_line);
}

/**
 * input_test.txt *
 *
 * Hello world! This is a example of
 * a text for testing the algorithm
 * Here I put the new line.
 */

/**
 * main.c *
 *
 * #include "get_next_line.h"
 * #include <fcntl.h>
 * #include <stdio.h>
 *
 * int main ()
 * {
 * 	int fd;
 * 	char *line;
 * 	int lines;
 *
 * 	lines = 1;
 * 	fd = open("input_test.txt", O_RDONLY);
 *
 * 	while ((line = get_next_line(fd)))
 * 		printf("%d->%s\n", lines++, line);
 * }
 */
