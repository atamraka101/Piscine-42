/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_projection_helper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:56:57 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/16 19:21:46 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_process_map.h"

void		ft_or_operation(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == '1' || s2[i] == '1')
			s1[i] = '1';
		i++;
	}
}

int			calculate_max_zeros(char *data)
{
	int		i;
	int		count;
	int		hold_count;

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

int			get_pos_max_zeros(char *data, int n)
{
	int		i;
	int		pos;
	int		count;

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

void		print_line(char *str, int len)
{
	write(1, str, len);
	write(1, "\n", 1);
}

void		print_result(t_map_line *line, t_mapkey *key, t_square sqr)
{
	int		i;
	int		j;
	int		e_row;
	int		e_col;

	i = -1;
	e_row = sqr.row + sqr.sq_size;
	e_col = sqr.col + sqr.sq_size;
	while (++i < key->line_count)
	{
		j = -1;
		while (++j < key->line_length)
		{
			if (line[i].bitmap[j] == '0')
			{
				if ((i >= sqr.row && i < e_row) && (j >= sqr.col && j < e_col))
					line[i].bitmap[j] = key->fill;
				else
					line[i].bitmap[j] = key->empty;
			}
			else
				line[i].bitmap[j] = key->obstacle;
		}
		print_line(line[i].bitmap, key->line_length);
	}
}
