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
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

run:
			gcc main.c -L. -lasm && ./a.out
