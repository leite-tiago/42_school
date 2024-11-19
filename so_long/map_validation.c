/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:12:48 by tborges-          #+#    #+#             */
/*   Updated: 2024/11/19 19:02:30 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "so_long.h"

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
bool	is_valid_char(char c)
{
	return (c == '0' || c == '1' || c == 'C' || c == 'E' || c == 'P');
}

/**
 * Verifies if the map is a rectangle, this means that
 * every row should have the same amount of collumns
 * and number of collums must me bigger than the number of
 * rows.
 */
bool	is_rectangle(t_map *map)
{
	int row;
	int current_col;
	int col;

	row = 0;
	while (map->data[row] != NULL)
	{
		current_col = 0;
		while (map->data[row][current_col] != '\0')
		{
			current_col++;
		}
		if (row == 0)
			col = current_col;
		if (current_col != col)
			return false;
		col = current_col;
	}
	if (col <= row)
		return false;
	return true;
}


/**
 * Reads the map from the file.
 */
t_map	read_map(const char *file)
{
	int		fd;
	char	*current_line;
	t_map	map;
	int row;
	int col;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		end_program();
	current_line = get_next_line(fd);
	row = 0;
	while (current_line != NULL)
	{
		col = 0;
		while (current_line[col] != '\0')
			map.data[row][col] = current_line[col++];
		map.data[row][col] = '\0';
		current_line = get_next_line(fd);
		row++;
	}

	map.rows = 0;
	while (current_line != NULL)
	{
		map.cols = 0;
		while (current_line[map.cols] != '\0')
			map.cols++;
		current_line = get_next_line(fd);
		map.rows++;
	}
	free(current_line);
	close(fd);
	return (map);
}


/**
 * Checks if the map is surrounded by walls.
 */
bool	is_surrounde_by_walls(t_map *map)
{
	int i;

	i = 0;
	while (i < map->cols)
	{
		if (map->data[0][i] != '1' || map->data[map->rows - 1][i] != '1')
			return false;
		i++;
	}
	i = 0;
	while (i < map->rows)
	{
		if (map->data[i][0] != '1' || map->data[i][map->cols - 1] != '1')
			return false;
		i++;
	}
	return true;
}

/**
 * Validates whether the map meets all necessary conditions.
 */
void	validate_map(t_map *map)
{
	if (map->count_p != 1 || map->count_e != 1 || map->count_c < 1)
	{
		write(2, "Error: Invalid map (missing P, E, or C)\n", 41);
		exit(1);
	}
	if (!is_rectangle(map))
	{
		write(2, "Error: Map is not rectangular\n", 34);
		exit(1);
	}
	if (!is_rectangle(map))
	{
		write(2, "Error: Map is not surrounded by walls\n", 37);
		exit(1);
	}
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
