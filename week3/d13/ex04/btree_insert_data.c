/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:10:51 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/11 19:52:02 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!root || !item)
		return ;
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	else if (cmpf(item, (*root)->item) < 0)
	{
		btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
	{
		btree_insert_data(&((*root)->right), item, cmpf);
	}
}
