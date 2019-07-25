# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daye <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 17:37:08 by daye              #+#    #+#              #
#    Updated: 2019/07/25 22:51:49 by daye             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./srcs/
HEADERS = ./includes/
FLAGS = -Wall -Werror -Wextra
SRCS = ${PATH_SRC}ft_putchar.c ${PATH_SRC}ft_putstr.c ${PATH_SRC}ft_strcmp.c \
	${PATH_SRC}ft_strlen.c ${PATH_SRC}ft_swap.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o :
	gcc -c ${FLAGS} -I ${HEADERS} $< -o ${<:.c=.o}
$(NAME) : ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re: fclean all

.PHONY: all clean fileclean re
