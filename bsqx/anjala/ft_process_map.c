/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:48:17 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/16 19:48:30 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_process_map.h"

void			init_values(int *temp, int *count, char *str, int size)
{
	*count = 0;
	*temp = 0;
	str = (char*)malloc(sizeof(char) * (size + 1));
}

int				ft_bitmap_projection_line(t_map_line *lines,
				int rows, int cols, int start_row)
{
	int			i;
	int			temp;
	int			count;
	char		*project;

	i = start_row + 1;
	count = 0;
	temp = 0;
	project = (char*)malloc(sizeof(char) * (cols + 1));
	ft_strcpy(project, lines[start_row].bitmap);
	while (i < rows)
	{
		ft_or_operation(project, lines[i].bitmap);
		temp = calculate_max_zeros(project);
		if ((i - start_row) < temp)
		{
			count = temp;
			ft_strcpy(lines[start_row].projection, project);
		}
		else
		{
			count = i - start_row;
			break ;
		}
		i++;
	}
	free(project);
	return (count);
}

t_square		ft_bitmap_projection(t_map_line *lines, int rows, int cols)
{
	int			i;
	t_square	sqr;
	int			count;

	i = 0;
	sqr.sq_size = 0;
	while (i < rows)
	{
		if ((rows - i) > sqr.sq_size)
		{
			count = ft_bitmap_projection_line(lines, rows, cols, i);
			if (sqr.sq_size < count)
			{
				sqr.sq_size = count;
				sqr.row = i;
			}
		}
		else
			break ;
		i++;
	}
	sqr.col = get_pos_max_zeros(lines[sqr.row].projection, sqr.sq_size);
	return (sqr);
}
