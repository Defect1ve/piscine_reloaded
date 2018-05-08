# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikotvits <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/19 19:19:30 by ikotvits          #+#    #+#              #
#    Updated: 2018/03/19 19:19:34 by ikotvits         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = includes

all: $(NAME)

$(NAME):
	@ gcc -c $(CFLAGS) $(SRC) -I$(HEADERS)
	@ ar rc $(NAME) $(OBJECTS)

clean:
	@ /bin/rm -f $(OBJECTS)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all