/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:27:44 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/16 18:29:00 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_process_map.h"
#include "read_map.h"
#include "debug.h"

int		main(int argc, char **argv)
{
	if (argc > 1)
		read_files(argc - 1, ++argv);
	else
		read_stdin();
	return (0);
}

int solve_map(char **map, t_mapkey *key)
{
	t_map_line 	*lines;
	t_square 	square;
	int 		i;
	int			j;
	
	i = 0;
	j = 0;
	lines = (t_map_line*)malloc(sizeof(t_map_line) * key->line_count);
	while (i < key->line_count)
	{
		lines[i].bitmap = (char*)malloc(sizeof(char) * (key->line_length));
		lines[i].projection = (char*)malloc(sizeof(char) * (key->line_length));
		j = 0;
		while (map[i][j] != '\n')
		{
			if (map[i][j] == key->obstacle)
				lines[i].bitmap[j] = '1';
			else if (map[i][j] == key->empty)
				lines[i].bitmap[j] = '0';
			else
			{
				free_lines(lines, key->line_count);
				return (-1);
			}
			j++;
		}
		lines[i].bitmap[j] = '\0';
		i++;
	}
	square = ft_bitmap_projection(lines, key->line_count, key->line_length);
	print_result(lines, key, square);
	return (0);
}

void free_lines(t_map_line *lines, int count)
{
	int i;
	
	i = 0;
	while (i < count)
	{
		free(lines[i].bitmap);
		free(lines[i].projection);
		i++;
	}
	free(lines);
}