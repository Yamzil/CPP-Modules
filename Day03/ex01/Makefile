# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 13:35:38 by yamzil            #+#    #+#              #
#    Updated: 2022/10/18 20:12:22 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\

INC = 	ClapTrap.hpp\
		ScavTrap.hpp\

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all