/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:28:28 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/13 17:55:28 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_UTILS_H
# define FT_IO_UTILS_H

# include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		std_read(char *buf, int len);

#endif
