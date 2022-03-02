CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM=rm -f
NAME=libftprintf.a
SRCS=ft_putchar_f.c \
	 ft_putstr_f.c \
	 ft_putnbr_f.c \
	 ft_unsigned_putnbr_f.c \
	 ft_int_len.c \
	 ft_hx_nbr.c \
	 ft_check.c \
	 ft_printf.c

OBJS=${SRCS:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
