/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 19:12:56 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/29 19:55:26 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int index;
	int multiply;

	index = 1;
	while (index < nb)
	{
		multiply = index * index;
		if (multiply > nb)
		{
			return (0);
		}
		else if (multiply == nb)
		{
			return (index);
		}
		index++;
	}
	return (0);
}
