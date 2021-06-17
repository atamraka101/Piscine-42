# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 15:13:29 by atamraka          #+#    #+#              #
#    Updated: 2021/06/10 18:04:14 by atamraka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS_DIR = srcs/

SOURCES = $(SRCS_DIR)/ft_display_file.c $(SRCS_DIR)/main.c

all:
	@$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

clean:
	@rm -f $(NAME)
	
fclean: clean

re: fclean all
