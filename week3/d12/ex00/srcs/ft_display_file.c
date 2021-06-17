/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:46:47 by atamraka          #+#    #+#             */
/*   Updated: 2021/06/10 18:02:17 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		ft_display(char *arguments)
{
	int		file;
	char	input;

	file = open(arguments, O_RDONLY);
	if (file < 0)
	{
		return ;
	}
	while (read(file, &input, 1))
	{
		write(1, &input, 1);
	}
	close(file);
}
