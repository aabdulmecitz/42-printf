NAME= libftprintf.a

SRCS= 	ft_put_c.c\
		ft_put_s.c\
		ft_put_d_i.c\
		ft_put_p.c\
		ft_put_u.c\
		ft_put_x.c\
		ft_check_type.c\
		ft_base.c\
		ft_printf.c

FLAGS= -Wall -Wextra -Werror

OBJS= 	ft_put_c.o\
		ft_put_s.o\
		ft_put_d_i.o\
		ft_put_p.o\
		ft_put_u.o\
		ft_put_x.o\
		ft_check_type.o\
		ft_base.o\
		ft_printf.o

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:  
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re