# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkinnune <jkinnune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/13 09:22:37 by atamraka          #+#    #+#              #
#    Updated: 2021/06/13 17:27:28 by jkinnune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC = gcc
CFLAGS = -Wall -Werror -Werror

INCDIR = includes
SRCDIR = srcs
RSHDIR = srcs/rushes/
SRCRSH = $(RSHDIR)/main.c \

SOURCES = $(SRCDIR)/main.c \
			$(SRCDIR)/ft_io_utils.c \
			$(SRCDIR)/ft_list.c \
			$(SRCDIR)/ft_line_extractor.c \
			$(SRCDIR)/ft_pattern_utils.c \
			$(SRCDIR)/ft_pattern_validator.c \
			$(SRCDIR)/ft_process_pattern.c \
			$(SRCDIR)/ft_display_result.c

all:
	@$(CC) $(CFLAGS) -o rush00 $(SRCRSH) $(RSHDIR)rush00.c
	@$(CC) $(CFLAGS) -o rush01 $(SRCRSH) $(RSHDIR)rush01.c
	@$(CC) $(CFLAGS) -o rush02 $(SRCRSH) $(RSHDIR)rush02.c
	@$(CC) $(CFLAGS) -o rush03 $(SRCRSH) $(RSHDIR)rush03.c
	@$(CC) $(CFLAGS) -o rush04 $(SRCRSH) $(RSHDIR)rush04.c
	@$(CC) $(CFLAGS) -I$(INCDIR) $(SOURCES) -o $(NAME)

clean:
	rm -rf $(NAME)
	rm  rush0*

fclean: clean

re: clean all