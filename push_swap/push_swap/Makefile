# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 15:47:14 by tborges-          #+#    #+#              #
#    Updated: 2024/10/29 23:44:16 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCE = arguments/*.c \
        operations/*.c \
        sorting/*.c \
        stack/*.c \
        push_swap.c

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a $(LIBFT_DIR)/ft_printf/libftprintf.a

all: $(LIBFT_LIB) $(NAME)

$(NAME): $(SOURCE)
    $(CC) $(CFLAGS) $(SOURCE) -Iincludes -o $(NAME) $(LIBFT_LIB)

$(LIBFT_LIB):
    $(MAKE) -C $(LIBFT_DIR)

clean:
    rm -rf *.o
    rm -rf arguments/*.o operations/*.o sorting/*.o stack/*.o
    $(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
    rm -rf $(NAME)
    $(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

