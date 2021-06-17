/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:48:46 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/16 14:36:41 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

void	debug_print_key(t_mapkey *key);
void	debug_print_map(char **map);
void	debug_print_cache(int **cache, t_mapkey *key);
void	debug_putstr(char *str);
void	debug_putnbr(int nbr);
#endif
