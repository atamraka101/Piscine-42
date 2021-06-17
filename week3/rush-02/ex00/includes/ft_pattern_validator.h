/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pattern_validator.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 08:31:17 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 16:47:27 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PATTERN_VALIDATOR_H
# define FT_PATTERN_VALIDATOR_H

# include "ft_pattern.h"
# include "ft_list.h"

int tentitive_rush_type(char c);
int check_top_line(char *line, int len, int tent_type);
int check_bottom_line(char *line, int len, int tent_type);
int check_mid_line(char *line, int len, int tent_type);

#endif
