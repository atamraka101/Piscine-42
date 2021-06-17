/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:13:49 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/01 20:17:59 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int a;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (src[0] == '\0')
	{
		return (i);
	}
	while ((j < size) && (src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	a = j + 1;
	return (a);
}
