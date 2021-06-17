/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:44:46 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/27 18:01:10 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_ft(int *nbr);

int	 main(void)
{
	int *po;
	int a;

	po = &a;
	ft_ft(po);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d", *nbr);
}
