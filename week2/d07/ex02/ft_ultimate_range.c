/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:48:26 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/03 18:12:10 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *hold;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	hold = (int*)(malloc((max - min) * sizeof(int)));
	if (hold == NULL)
	{
		return (0);
	}
	while ((min + i) < max)
	{
		hold[i] = min + i;
		i++;
	}
	*range = hold;
	return (max - min);
}
