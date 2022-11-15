NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

CFILES = ft_printf.c ft_strlen.c ft_putchar_len.c ft_putstr_len.c ft_printres.c \
		ft_putunbr_len.c ft_putnbr_len.c ft_putadress.c ft_puthexa.c

OBJS = ft_printf.o ft_strlen.o ft_putchar_len.o ft_putstr_len.o ft_printres.o \
		ft_putunbr_len.o ft_putnbr_len.o ft_putadress.o ft_puthexa.o

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
