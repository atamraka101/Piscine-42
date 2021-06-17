/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pattern_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 09:10:42 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 13:39:06 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PATTERN_UTILS_H
# define FT_PATTERN_UTILS_H

int check_mid_chars(char *data, int len, char p);
int check_mid_line_ends(char *line, int len, int type);
int check_top_line_ends(char *line, int len, int type);
int check_bottom_line_ends(char *line, int len, int type);

#endif
