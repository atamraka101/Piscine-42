/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:48:17 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/16 18:02:54 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_process_map.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void ft_or_operation(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == '1' || s2[i] == '1')
			s1[i] = '1';
		i++;
	}
}

int calculate_max_zeros(char *data)
{
	int i;
	int count;
	int hold_count;

	i = 0;
	count = 0;
	hold_count = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '0')
			count++;
		if (data[i] == '1')
		{
			if (count > hold_count)
				hold_count = count;
			count = 0;
		}
		i++;
	}
	if (count > hold_count)
		hold_count = count;
	return (hold_count);
}

int get_pos_max_zero(char *data, int n)
{
	int i;
	int pos;
	int count;

	i = 0;
	pos = 0;
	count = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '0')
		{
			count++;
			if (count == n)
				return (pos);
		}
		if (data[i] == '1')
		{
			pos = i + 1;
			count = 0;
		}
		i++;
	}
	return (0);
}



int ft_bitmap_projection_line(t_map_line *lines, int rows, int cols, int start_row)
{
	int i;
	int temp;
	int count;

	i = start_row + 1;
	count = 0;
	temp = 0;
	char *project;

	project = (char*)malloc(sizeof(char) * (cols + 1));
	ft_strcpy(project, lines[start_row].bitmap);
	while (i < rows)
	{
		//printf("Projecting lines: start_row:%d %s\n", start_row, project);
		//printf("Projecting lines: %d: %s\n", i, lines[i].bitmap);
		ft_or_operation(project, lines[i].bitmap);
		temp = calculate_max_zeros(project);
		//printf("Projection output: %s\n", lines[start_row].projection);
		//printf(" i - start_row %d\n", (i - start_row));
		//printf("temp: %d, count: %d\n\n", temp, count);
		
		if ((i - start_row) < temp)
		{
			count = temp;
			ft_strcpy(lines[start_row].projection, project);
		}
		else {
			/** we need to break */
			count = i - start_row;
			//printf ("\n\nProject: %s:", lines[start_row].projection);
			//ft_strcpy(lines[start_row].projection, project);
			//printf("Project: %d, start_row: %d %s\n", i, start_row, project);
			break;
		}
		/*if ((rows - i) < count)
			return (count);*/
		i++;
	}
	free (project);
	return (count);
}

t_square ft_bitmap_projection(t_map_line *lines, int rows, int cols)
{
	int i;
	t_square square;
	int count;
	
	i = 0;
	square.sq_size = 0;
	/*count = ft_bitmap_projection_line(lines, rows, cols, 40);
	printf("count: %d\n", count);*/
	while (i < rows)
	{
		if ((rows - i) > square.sq_size)
		{
			count = ft_bitmap_projection_line(lines, rows, cols, i);
			if (square.sq_size < count)
			{
				square.sq_size = count;
				square.row = i;
			}
		}
		else
			break;
		
		//printf("Row: %d , count: %d\n", i, count);
		i++;
	}
	//printf("Projection: %s\n", lines[square.row].projection);
	square.col = get_pos_max_zero(lines[square.row].projection, square.sq_size);
	//printf("Max Zero: %d, max zero row: %d, Pos: %d\n", square.sq_size, square.row, square.col);
	
	return (square);
}

/*void ft_print_projection(t_map_line *lines, int rows)
{
	int i = 0;

	while (i < rows)
	{
		printf("lines[%d].projection: %s\n", i, lines[i].projection);
		i++;
	}
}*/

void print_result(t_map_line *line, t_mapkey *key, t_square square)
{
	int i;
	int j;

	i = 0;
	int sq_end_row = square.row + square.sq_size;
	int sq_end_col = square.col + square.sq_size;
	while (i < key->line_count)
	{
		j = 0;
		while (j < key->line_length)
		{
			if(line[i].bitmap[j] == '0')
			{
				if ((i >= square.row && i < sq_end_row) && (j>= square.col && j < sq_end_col))
					line[i].bitmap[j] = key->fill;
				else
					line[i].bitmap[j] = key->empty;
			}
				
			else
				line[i].bitmap[j] = key->obstacle;
			j++;
		}
		write(1, line[i].bitmap, key->line_length);
		write(1, "\n", 1);
		i++;
	}
}