# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 15:47:14 by tborges-          #+#    #+#              #
#    Updated: 2024/10/08 16:04:25 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome dos ficheiros de saída
CLIENT = client
SERVER = server

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Diretórios das bibliotecas
LIBFT_DIR = libft
PRINTF_DIR = printf

# Bibliotecas e headers
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

# Ficheiros fontes
CLIENT_SRC = client.c
SERVER_SRC = server.c

# Ficheiros objetos
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)
SERVER_OBJ = $(SERVER_SRC:.c=.o)

# Regras padrão (compilar bibliotecas e ambos client e server)
all: $(LIBFT) $(PRINTF) $(CLIENT) $(SERVER)

# Regras para compilar client e server
$(CLIENT): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) -o $(CLIENT) $(CLIENT_OBJ) -L$(PRINTF_DIR) -lftprintf -L$(LIBFT_DIR) -lft

$(SERVER): $(SERVER_OBJ)
	$(CC) $(CFLAGS) -o $(SERVER) $(SERVER_OBJ) -L$(PRINTF_DIR) -lftprintf -L$(LIBFT_DIR) -lft

# Compilar a libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Compilar o ft_printf
$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

# Limpar ficheiros objeto e binários gerados
clean:
	rm -f $(CLIENT_OBJ) $(SERVER_OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(CLIENT) $(SERVER)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

# Recompilar tudo
re: fclean all

# Regra de phony para evitar conflitos com ficheiros reais
.PHONY: all clean fclean re
