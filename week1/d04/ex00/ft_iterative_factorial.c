/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:23:58 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/29 09:35:18 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int counter;
	int factorial;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		counter = nb;
		factorial = 1;
		while (counter != 0)
		{
			factorial = factorial * counter;
			counter--;
		}
		return (factorial);
	}
}
