/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:16:52 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/29 20:27:27 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if ((nb % 2 == 0) || (nb % 3 == 0) || (nb % 5 == 0))
	{
		return (0);
	}
	else if ((nb == 0) || (nb == 1))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
