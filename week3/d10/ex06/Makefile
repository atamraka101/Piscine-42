# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamraka <atamraka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 17:57:51 by atamraka          #+#    #+#              #
#    Updated: 2021/06/08 18:02:58 by atamraka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = gcc
CFLAGS = -Wall -Werror -Wextra

INCDIR = includes
SRCDIR = srcs
SOURCES = $(SRCDIR)/main.c $(SRCDIR)/ft_ios.c $(SRCDIR)/ft_operations.c

all:
	@$(CC) $(CFLAGS) -I$(INCDIR) $(SOURCES) -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all