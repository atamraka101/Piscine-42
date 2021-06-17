/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pattern.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 07:21:32 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 13:57:41 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PATTERN_H
# define FT_PATTERN_H

# define RUSH_00 0
# define RUSH_01 1
# define RUSH_02 2
# define RUSH_03 3
# define RUSH_04 4
# define RUSH_0234 5
# define RUSH_024 6
# define RUSH_034 7
# define UNKNOWN_PATTERN -1

# define SHAPE_RECTANGLE 1
# define SHAPE_SQUARE 2
# define SHAPE_TRIANGLE 3

typedef struct	s_pattern
{
	int rows;
	int cols;
	int type;
	int shape;
}				t_pattern;

#endif
