/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:12:48 by tborges-          #+#    #+#             */
/*   Updated: 2024/11/19 14:31:12 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define VALID_CHARS "01CEP"

typedef struct s_map {
	char	**data; // Armazena o mapa
	int		rows;   // Número de linhas
	int		cols;   // Número de colunas
	int		count_p; // Contador de 'P'
	int		count_e; // Contador de 'E'
	int		count_c; // Contador de 'C'
}				t_map;

/**
 * Frees the memory used by the map.
 */
void	free_map(t_map *map)
{
	for (int i = 0; i < map->rows; i++)
		free(map->data[i]);
	free(map->data);
}

/**
 * Verifies if a char is a valid map element.
 */
int	is_valid_char(char c)
{
	return (c == '0' || c == '1' || c == 'C' || c == 'E' || c == 'P');
}

/**
 * Reads the map from the file.
 */
t_map	read_map(const char *file)
{
	t_map	map = {0};
	int		fd = open(file, O_RDONLY);
	char	*line = NULL;
	size_t	len = 0;
	ssize_t	read;

	if (fd < 0)
		end_program();

	// Ler linhas do arquivo
	while ((read = getline(&line, &len, fdopen(fd, "r"))) != -1)
	{
		if (map.rows == 0)
			map.cols = read - 1; // Determina o comprimento inicial (desconsidera '\n')
		else if (read - 1 != map.cols)
		{
			fprintf(stderr, "Error: Map is not rectangular\n");
			exit(1);
		}

		// Aloca espaço para armazenar a linha
		map.data = realloc(map.data, sizeof(char *) * (map.rows + 1));
		map.data[map.rows] = malloc(sizeof(char) * (map.cols + 1));
		for (int i = 0; i < map.cols; i++)
		{
			if (!is_valid_char(line[i]))
			{
				fprintf(stderr, "Error: Invalid character in map\n");
				exit(1);
			}
			map.data[map.rows][i] = line[i];
			if (line[i] == 'P') map.count_p++;
			if (line[i] == 'E') map.count_e++;
			if (line[i] == 'C') map.count_c++;
		}
		map.data[map.rows][map.cols] = '\0';
		map.rows++;
	}
	free(line);
	close(fd);

	return (map);
}

// Função para verificar se o mapa é cercado por paredes
void	validate_borders(t_map *map)
{
	for (int i = 0; i < map->cols; i++)
		if (map->data[0][i] != '1' || map->data[map->rows - 1][i] != '1')
		{
			fprintf(stderr, "Error: Map is not surrounded by walls\n");
			exit(1);
		}
	for (int i = 0; i < map->rows; i++)
		if (map->data[i][0] != '1' || map->data[i][map->cols - 1] != '1')
		{
			fprintf(stderr, "Error: Map is not surrounded by walls\n");
			exit(1);
		}
}

// Função principal para validação do mapa
void	validate_map(t_map *map)
{
	// Checa condições obrigatórias
	if (map->count_p != 1 || map->count_e != 1 || map->count_c < 1)
	{
		fprintf(stderr, "Error: Invalid map (missing P, E, or C)\n");
		exit(1);
	}

	// Valida bordas
	validate_borders(map);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <map_file.ber>\n", argv[0]);
		return (1);
	}

	// Lê o mapa
	t_map map = read_map(argv[1]);

	// Valida o mapa
	validate_map(&map);

	printf("Map is valid!\n");

	// Libera a memória do mapa
	free_map(&map);

	return (0);
}
