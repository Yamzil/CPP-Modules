# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 22:30:09 by yamzil            #+#    #+#              #
#    Updated: 2022/10/11 17:59:54 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp\
		weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

INC = 	weapon.hpp\
		HumanA.hpp\
		HumanB.hpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all
