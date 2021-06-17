/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_extractor.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:13:38 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 16:45:25 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINE_EXTRACTOR_H
# define FT_LINE_EXTRACTOR_H

# include "ft_list.h"

int		ft_count_lines(char *buf, int buf_len);
void	ft_get_line_info(char *buf, int buf_len, int *pos, int *len);
t_list	**ft_extract_lines(char *buf, int buf_len);

#endif
