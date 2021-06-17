/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 06:15:15 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/08 06:48:40 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if((*f)(tab[i])
			count++;
		i++;
	}
	return (count);
}