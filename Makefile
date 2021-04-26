SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s

OBJS		= $(SRCS:.s=.o)
NAME 		= libasm.a
NASM		= nasm
NFLAGS		= -f macho64


all: 		$(NAME)

%.o: 		%.s
			$(NASM) $(NFLAGS) $^

$(NAME):	$(OBJS)
			ar -cr libasm.a $^
			gcc main.c libasm.a libasm.h

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
			rm -f a.out

re:			fclean all

.PHONY: re clean fclean all