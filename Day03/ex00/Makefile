# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 21:55:22 by yamzil            #+#    #+#              #
#    Updated: 2022/10/18 18:46:26 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp\
		ClapTrap.cpp\

INC = ClapTrap.hpp

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all