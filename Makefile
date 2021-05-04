SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

BONUS	= ft_list_push_front.s ft_list_size.s ft_list_sort.s 

OBJS		= $(SRCS:.s=.o)
OBJSBONUS 	= $(BONUS:.s=.o)
NAME 		= libasm.a
NASM		= nasm
NFLAGS		= -f macho64


all: 		$(NAME)

bonus:		$(OBJS) $(OBJSBONUS)
			ar -cr libasm.a $^
			gcc main_bonus.c libasm.a libasm.h -g

%.o: 		%.s
			$(NASM) $(NFLAGS) $^

$(NAME):	$(OBJS)
			ar -cr libasm.a $^
			gcc main.c libasm.a libasm.h

clean:
			rm -f $(OBJS)
			rm -f $(OBJSBONUS)

fclean:		clean
			rm -f $(NAME)
			rm -f a.out

re:			fclean all

.PHONY: re clean fclean all