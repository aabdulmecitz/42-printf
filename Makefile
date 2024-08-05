# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kali <kali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 19:39:29 by marvin            #+#    #+#              #
#    Updated: 2024/08/05 09:20:26 by kali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell find . -name ft_*.c)

OBJS = $(SRCS:.c=.o)

SRCS = $(shell find . -name 'ft_*.c')
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

CC = gcc
RM = rm -f

all: $(NAME)

# Derleme kuralı
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Arşivleme kuralı
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Temizlik kuralı
clean:
	$(RM) $(OBJS)

# Temizleme ve yeniden kurulum kuralı
fclean: clean
	$(RM) $(NAME)

# Yeniden kurulum kuralı
re: fclean all
