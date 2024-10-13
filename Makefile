NAME= ft_printf.a
SRCS= ft_printf.c ft_check_type.c ft_put_c.c ft_put_d_i.c ft_put_s.c ft_put_u.c ft_put_x.c ft_put_p.c
FLAGS= -Wall -Wextra -Werror
OBJS= ${SRCS:.c=.o}

${NAME}: 
	gcc $(FLAGS) -c $(SRCS)
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:  
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

run: re all
	gcc main.c printf.a
	./a.out

.PHONY: all clean fclean re