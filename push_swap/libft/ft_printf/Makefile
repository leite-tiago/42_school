# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 17:44:25 by tborges-          #+#    #+#              #
#    Updated: 2024/10/31 11:43:39 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= ft_printf.h
CC			= cc
CFLAGS		= -Wall -Werror -Wextra

SRCS = ft_printf.c prints1.c prints2.c prints3.c
OBJS	= $(SRCS:.c=.o)

$(NAME):	$(OBJS) $(INCLUDE)
			ar -rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
