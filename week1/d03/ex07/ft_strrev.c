/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:41:37 by atamraka          #+#    #+#             */
/*   Updated: 2021/05/28 20:33:08 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char hold;
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < len)
	{
		hold = str[len - 1];
		str[len - 1] = str[i];
		str[i] = hold;
		i++;
		len--;
	}
	return (str);
}
