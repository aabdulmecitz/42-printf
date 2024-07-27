# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 19:39:29 by marvin            #+#    #+#              #
#    Updated: 2024/07/27 19:39:29 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(shell find . -name ft_*.c)

OBJS	=	(SRCS:.c=.o)

NAME	=	libftprintf.a

FLAGS	= -Wall -Wextra -Werror

CC = gcc
RM = rm -f

all:	${NAME}

%.o: %.c
		$(CC) $(FLAGS) -o $@ -c $?

${NAME}:	${OBJS}
					ar rcs ${NAME} ${OBJS}

clean:
					${RM} ${OBJS}

fclean:		clean
					${RM} ${NAME}

re:					fclean all



