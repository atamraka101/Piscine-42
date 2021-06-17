/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_pattern.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:47:47 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 13:58:21 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROCESS_PATTERN_H
# define FT_PROCESS_PATTERN_H

# include "ft_pattern_validator.h"

int			check_rush_type(t_list *begin_line);
int			ft_verify_columns(t_list *begin_list);
t_pattern	ft_process_pattern(t_list **begin_list);

#endif
