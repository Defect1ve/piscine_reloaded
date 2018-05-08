# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikotvits <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/19 20:00:01 by ikotvits          #+#    #+#              #
#    Updated: 2018/03/19 20:00:03 by ikotvits         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	@ gcc -c $(CFLAGS) $(SRC)
	@ gcc $(OBJ) -o $(NAME)

clean:
	@ /bin/rm -f $(OBJ)

fclean: clean
	@ /bin/rm -f $(NAME)