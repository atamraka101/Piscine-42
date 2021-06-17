/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:21:51 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/01 20:16:54 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
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
	a = i + j + 1;
	return (a);
}
