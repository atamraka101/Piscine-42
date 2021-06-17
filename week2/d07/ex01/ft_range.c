/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:40:02 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/03 13:33:20 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int*)(malloc((max - min) * sizeof(int)));
	if (!range)
	{
		return (NULL);
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
