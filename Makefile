# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaradja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/28 23:23:57 by akaradja          #+#    #+#              #
#    Updated: 2016/02/15 00:28:22 by akaradja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c ft_*.c -I .
	ar rc libft.a *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
