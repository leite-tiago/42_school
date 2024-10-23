# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 20:18:54 by tborges-          #+#    #+#              #
#    Updated: 2024/10/23 11:04:10 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

INCLUDE	= libft.h
SRCS	= ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_striteri.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c
OBJS	= $(SRCS:.c=.o)
BONUS_S	= ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
			ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_O	= $(BONUS_S:.c=.o)

FT_PRINTF_DIR = ft_printf
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE) $(FT_PRINTF_LIB)
			ar -rcs $(NAME) $(OBJS) $(FT_PRINTF_LIB)

$(FT_PRINTF_LIB):
			$(MAKE) -C $(FT_PRINTF_DIR)

bonus:		$(NAME) $(BONUS_O)
			ar -rcs $(NAME) $(BONUS_O)

clean:
			rm -f $(OBJS) $(BONUS_O)
			$(MAKE) clean -C $(FT_PRINTF_DIR)

fclean:		clean
			rm -f $(NAME)
			$(MAKE) fclean -C $(FT_PRINTF_DIR)

re:			fclean all

.PHONY:		all clean fclean re bonus

