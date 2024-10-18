NAME= libftprintf.a
SRCS= 	specifier/ft_put_c.c\
		specifier/ft_put_s.c\
		specifier/ft_put_d_i.c\
		specifier/ft_put_p.c\
		specifier/ft_put_u.c\
		specifier/ft_put_x.c\
		services/ft_check_type.c\
		ft_printf.c

FLAGS= -Wall -Wextra -Werror
OBJS= $(SRCS:.c=.o)
LIBFTOBJS= $(LIBFTALL:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:  
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

run: re
	@gcc main.c $(NAME) 
	@make clean
	@clear
	./a.out

push:
	git add .
	git commit -m "mesaj"
	git push


.PHONY: all clean fclean re run