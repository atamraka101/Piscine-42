/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:27:44 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/16 08:35:37 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_process_map.h"

char	*ft_strcpy(char *dest, char *src);

int main(int argc, char **argv)
{
	t_map_line *lines;
	t_square square;
	int cols, rows, i, j, k;
	
	cols = 0;
	rows = 12;
	lines = (t_map_line*)malloc(sizeof(t_map_line) * rows);

	/* counting no of characters in a line*/
	while (argv[1][cols] != '\n')
		cols++;

	i = 0;
	j = 0;
	/* Data copy begin */
	while (i < rows)
	{
		lines[i].bitmap = (char*)malloc(sizeof(char) * (cols + 1));
		lines[i].projection = (char*)malloc(sizeof(char) * (cols + 1));
		k = 0;
		
		while(argv[1][j] != '\0')
		{
			if (argv[1][j] == '\n')
			{
				j++;
				break;
			}
			if (argv[1][j] == 'o')
				lines[i].bitmap[k] = '1';
			else 
				lines[i].bitmap[k] = '0';
			k++;
			j++;
		}
		lines[i].bitmap[k] = '\0';
		ft_strcpy(lines[i].projection, lines[i].bitmap);
		i++;
	}
	/* data copy ends */

	i = 0;
	while (i < rows)
	{
		j = 0;
		//printf("Line: %d --> %s", i, (lines[i].projection));
		
		//printf("\n");
		//printf("line[%d]->data: %s\n", i, (lines[i]).data);
		i++;
	}
	ft_print_projection(lines, rows);
	square = ft_bitmap_projection(lines, rows, cols);
	print_result(lines, rows, cols, square);

	

	i = 0;
	while (i < rows)
	{
		free(lines[i].bitmap);
		i++;
	}
	free(lines);
	return 0;
}
/*  ./a.out $'..o..\no...o\n..ooo' */