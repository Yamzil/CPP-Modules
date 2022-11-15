# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 15:59:28 by yamzil            #+#    #+#              #
#    Updated: 2022/10/18 12:11:29 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	DiamondTrap

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 

SRC = 	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		DiamondTrap.cpp\
		FragTrap.cpp\

INC = 	ClapTrap.hpp\
		ScavTrap.hpp\
		FragTrap.hpp\
		DiamondTrap.hpp\

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all