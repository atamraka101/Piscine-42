/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:45:30 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/16 19:19:56 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROCESS_MAP_H
# define FT_PROCESS_MAP_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_maps.h"
# include "read_map.h"

/*
** A function that returns the starting pos of the given
** largest continuous zeros in the given data.
** data: pointer to the data on which largest zeros is available
** n: is the size of the largest continuous zeros.
*/
int			get_pos_max_zeros(char *data, int n);

/*
** a function that performs OR operations on S1 and S2 values
** treated as bits.
** Note: Each element of S1 and S2 shall only contain
** char '1' or '0' as the value;
** The result of the OR operation is stored in S1.
*/
void		ft_or_operation(char *s1, char *s2);

/*
** A function that will count the number of continuous
** zeros in a given data.
** data -  pointer to the projection data as we need to
** calculate the largest zeros in the line which gives
** the size of the square.
** returns: returns the value of largest
** continuous zeros found in the projection data, which
** is equivalent to the size of the largest square that
** can be drawn from a given line.
*/
int			calculate_max_zeros(char *data);

/*
** Function that prints the output
*/
void		print_result(t_map_line *line, t_mapkey *key, t_square square);

t_square	ft_bitmap_projection(t_map_line *lines, int rows, int cols);
void		free_lines(t_map_line *lines, int count);

#endif
