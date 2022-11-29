NAME	= libftprintf.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs
RM	= rm -f

LIBRARY = ./libft/

SRC	= ft_printf.c ft_hexa.c ft_ptr.c print_type.c ft_utoa.c ft_printf_utils.c

OBJS	= $(SRC:.c=.o)

.c.o:	
	$(CC) $(CFLAGS) -I $(LIBRARY) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	cd $(LIBRARY) && $(MAKE) && cp -v libft.a ../$(NAME)
		$(AR) $(NAME) $(OBJS)
		ranlib $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)
	cd $(LIBRARY) && $(MAKE) clean

fclean:	clean
	$(RM) $(NAME) 
	cd $(LIBRARY) && $(MAKE) fclean

re:	fclean all

.PHONY: all clean fclean re
