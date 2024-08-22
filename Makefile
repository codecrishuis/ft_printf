NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_printf_c.c \
		ft_printf_hexa.c \
		ft_printf_nb.c \
		ft_printf_nb_unsig.c \
		ft_printf_ptr.c\
		ft_printf_s.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f

CCFLAGS = -Wall -Werror -Wextra

.c.o:
	$(CC) $(CCFLAGS) -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS} 
	ar -rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean
	${MAKE}

.PHONY: all clean fclean re