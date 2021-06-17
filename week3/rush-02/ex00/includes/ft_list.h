/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:26:29 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 13:56:19 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
	int				len;
}					t_list;

t_list				*ft_create_list(char *data, int len);
void				ft_add_list(t_list **begin_line, char *data, int len);
int					ft_count_list(t_list *begin_line);
void				ft_deallocate_list(t_list **begin_line);

#endif
