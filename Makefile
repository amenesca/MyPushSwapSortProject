NAME 		= push_swap

LIBFTPRINTF	= ./ft_printf/libftprintf.a

SRCS		= ./srcs/main.c ./srcs/ft_stack/ft_stackadd_back.c ./srcs/ft_stack/ft_stackadd_front.c \
			./srcs/ft_stack/ft_stacklast.c ./srcs/ft_stack/ft_stacknew.c  ./srcs/test_error.c \
			./srcs/push_atoi.c ./srcs/macro_operations.c ./srcs/macro_error.c ./srcs/operations.c \
			./srcs/operations2.c ./srcs/operations3.c ./srcs/prepare_for_sort.c ./srcs/bits.c \
			./srcs/push_swap.c ./srcs/mini_push_swap.c ./srcs/mini_push_swap2.c \

OBJS		= $(SRCS:.c=.o)

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

.c.o:
			cc $(CFLAGS) -c $< -o $(<:.c=.o) -I ./includes

$(NAME):	$(OBJS)
				make -C ./ft_printf
				cc $(CFLAGS) $(OBJS) $(LIBFTPRINTF) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)
				make clean -C ./ft_printf

fclean:		clean
				$(RM) $(NAME)
				make fclean -C ./ft_printf

re:			fclean all

.PHONY:		all clean fclean re