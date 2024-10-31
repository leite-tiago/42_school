# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 15:47:14 by tborges-          #+#    #+#              #
#    Updated: 2024/10/31 12:02:46 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCE = arguments/error.c arguments/frees.c arguments/utils.c \
		operations/push.c operations/reverse_rotate.c operations/rotate.c operations/swap.c \
		sorting/sort_utils.c sorting/sort.c \
		stack/stack_find.c stack/stack_init.c stack/stack_set.c stack/stack_utils.c \
		push_swap.c

OBJ = $(SOURCE:.c=.o)

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a
FT_PRINTF_LIB = $(LIBFT_DIR)/ft_printf/libftprintf.a

all: $(LIBFT_LIB) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -Iincludes -o $(NAME) $(LIBFT_LIB) $(FT_PRINTF_LIB)

# %.o: %.c
# 	$(CC) $(CFLAGS) -Iincludes -c $< -o $@

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -rf $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
