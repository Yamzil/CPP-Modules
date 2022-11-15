# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 16:34:54 by yamzil            #+#    #+#              #
#    Updated: 2022/10/24 14:15:40 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\

INC = 	ClapTrap.hpp\
		ScavTrap.hpp\
		FragTrap.hpp\

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all