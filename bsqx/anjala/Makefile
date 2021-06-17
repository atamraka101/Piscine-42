# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 13:16:01 by atamraka          #+#    #+#              #
#    Updated: 2021/06/16 19:14:31 by atamraka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CFLAGS = -Wall -Werror -Werror
INCDIR = .
SOURCES = main.c \
			ft_process_map.c \
			read_map.c \
			debug.c \
			numbers.c \
			read.c \
			tools.c \
			print.c \
			ft_projection_helper.c

all:
	$(CC) -I$(INCDIR) $(SOURCES) -o $(NAME);

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all