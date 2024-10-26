# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 15:47:14 by tborges-          #+#    #+#              #
#    Updated: 2024/10/14 21:03:21 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do executável
NAME = push_swap

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -Werror

# Diretórios
SRC_DIR = stack
OPS_DIR = stack/operations
LIBFT_DIR = libft
PRINTF_DIR = ft_printf

# Arquivos de origem (src), incluindo o teste.c como um ficheiro normal
SRC = $(OPS_DIR)/push.c \
	  $(OPS_DIR)/reverse_rotate.c \
	  $(OPS_DIR)/rotate.c \
	  $(OPS_DIR)/swap.c \
	  $(SRC_DIR)/stack_utils.c \
	  push_swap.c \
	  $(OPS_DIR)/teste.c

# Arquivos de objeto (object files)
OBJ = $(SRC:.c=.o)

# Caminho das bibliotecas
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

# Comandos principais
all: $(NAME)

# Compilação do push_swap
$(NAME): $(OBJ) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

# Compilar a libft
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Compilar o ft_printf
$(PRINTF):
	@make -C $(PRINTF_DIR)

# Limpar arquivos objeto
clean:
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(PRINTF_DIR)
	rm -f $(OBJ)

# Limpar tudo, incluindo o executável
fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(PRINTF_DIR)
	rm -f $(NAME)

# Recompilar tudo
re: fclean all
