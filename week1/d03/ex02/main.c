/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 20:15:12 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/27 20:19:43 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int av;
	int bv;

	av = 5;
	bv = 10;
	a = &av;
	b = &bv;
	ft_swap(a, b);
	printf("%d %d", av, bv);
	return (0);
}
