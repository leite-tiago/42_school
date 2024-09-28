/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:57:00 by tborges-          #+#    #+#             */
/*   Updated: 2024/08/22 12:01:38 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * Ler texto para o buffer através da função read, o texto vai ser guardado em
 * pedaços de tamanho BUFFER_SIZE até encontrar '\n', cada pedaço de texto vai
 * ser junto à linha usando o ft_strjoin
 */
char	*read_line(int fd, char *line)
{
	char	*buffer;
	ssize_t	bytes_read;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	do
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
	while (!ft_strchr(buffer, '\n') && bytes_read > 0);
	free(buffer);
	return (line);
}

/**
 * A função anterior guarda o texto em pedaços de tamanho BUFFER_SIZE, isto
 * pode causar que o '\n' fique noutro lugar além do fim da linha.
 * O objetivo desta função é "limpar" o que estiver entre o '\n' e o fim da
 * linha retornando a linha já no seu estado final. Digo "limpar" porque vamos
 * precisar deste pedaço de texto para a próxima linha, por este motivo é criada
 * uma nova string em vez de apenas limpar a própria linha.
 */
char	*get_line(char *line)
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

/**
 * O objetivo desta função é limpar a variável line, guardando o pedaço de
 * texto referido na função anterior para ser usado na próxima vez que
 * o programa for usado.
 */
char	*new_line(char *line)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * ft_strlen(line) - i + 1);
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

/**
 * Função principal
 */
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
 * input_test.txt
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
