# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 12:39:58 by pgomez-a          #+#    #+#              #
#    Updated: 2021/05/21 12:49:14 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	all clean fclean re

NAME	= libasm.a

SRCS	= ft_strlen.s	\
		  ft_strcpy.s	\
		  ft_strcmp.s	\
		  ft_write.s	\
		  ft_read.s		\
		  ft_strdup.s

OBJS	= $(SRCS:.s=.o)

AS		= nasm -f macho64 

AR		= ar rc

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\033[30;48;5;82mlibasm.a created\033[0m"

clean:
	@$(RM) $(OBJS) 

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

run:
	@gcc -Wall -Werror -Wextra  main.c -L. -lasm && ./a.out
