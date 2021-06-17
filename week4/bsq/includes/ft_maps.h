/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maps.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 07:35:22 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/16 17:26:33 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAPS_H
# define FT_MAPS_H

/*
** A structure that will hold each line data converted
** as bitmap.
** - bitmap: holds the bit representation of each line
** however, each bit is represented as char '1' or '0'
** insted of real bits
** - Projection represents OR values of the bitmaps
** starting from the current line till it can find
** largest square.
** - sq_size: gives the size of the largest square
** that can be found for the given line
** - pos: gives the starting col position of the square
** - in the current line. Current line being row value
** and the pos being the col value.
*/
typedef struct	s_map_line
{
	char		*bitmap;
	char		*projection;
	int			sq_size;
	int			pos;
}				t_map_line;

/*
** A data structure to hold the information of
** a resulting largest square
** sq_size: the size of the square
** row: the row from which the square starts
** col: the column from which the square starts
*/
typedef struct	s_square
{
	int			sq_size;
	int			row;
	int			col;
}				t_square;

#endif
