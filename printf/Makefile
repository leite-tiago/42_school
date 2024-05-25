# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 17:44:25 by tborges-          #+#    #+#              #
#    Updated: 2024/05/23 15:37:32 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= ft_printf.h
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs

LIBFT = libft/libft.a

SRCS = ft_printf.c prints1.c prints2.c prints3.c

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE) $(LIBFT)
			ar -rcs $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	@make -s -C ./libft

clean:
			rm -f $(OBJS) $(BONUS_O)

fclean:		clean
			rm -f $(NAME)
