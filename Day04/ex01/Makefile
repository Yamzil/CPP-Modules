# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 21:05:37 by yamzil            #+#    #+#              #
#    Updated: 2022/10/26 23:10:23 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	World_on_fire

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp\
		main.cpp\

INC =	Animal.hpp\
		Dog.hpp\
		Cat.hpp\
		Brain.hpp\

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all