# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 17:20:26 by atamraka          #+#    #+#              #
#    Updated: 2021/06/07 18:03:00 by atamraka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCE_DIR = srcs
INCLUDES_DIR = ./includes

SOURCES = $(SOURCE_DIR)/ft_putchar.c $(SOURCE_DIR)/ft_putstr.c \
			$(SOURCE_DIR)/ft_strcmp.c \
			$(SOURCE_DIR)/ft_strlen.c $(SOURCE_DIR)/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: make_lib

make_lib:
		@$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $(SOURCES)
		@ar -rc $(NAME) $(OBJECTS)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all