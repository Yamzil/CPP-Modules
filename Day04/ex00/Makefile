# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 19:24:47 by yamzil            #+#    #+#              #
#    Updated: 2022/10/26 23:23:33 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Animal

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	Animal.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Dog.cpp\
		Cat.cpp\
		main.cpp\

INC =	Animal.hpp\
		WrongAnimal.hpp\
		WrongCat.hpp\
		Dog.hpp\
		Cat.hpp\

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all