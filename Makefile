NAME =  libftprintf.a
MAND = 	ft_putchar.c\
		ft_puthex.c\
		ft_putstr.c\
		ft_printf.c\
		ft_putnbr.c\
		ft_putuns.c\
		ft_putptr.c

CC = cc
FLAGS = -Wall -Wextra -Werror
OBJS = $(MAND:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all