# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 19:57:00 by yamzil            #+#    #+#              #
#    Updated: 2022/10/07 19:57:33 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moar_brainz

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp\
		Zombie.cpp\
		zombieHorde.cpp\

INC = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all
