# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 17:44:25 by tborges-          #+#    #+#              #
#    Updated: 2024/05/26 17:57:26 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= ft_printf.h
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs

SRCS = ft_printf.c prints1.c prints2.c prints3.c

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			ar -rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
