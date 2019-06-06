# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 15:39:56 by gpanyana          #+#    #+#              #
#    Updated: 2019/06/05 17:37:55 by gpanyana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SRC = ft*.c

OBJ = ft*.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(FLAGS) $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
