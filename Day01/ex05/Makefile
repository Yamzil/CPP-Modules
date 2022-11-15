# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 02:13:04 by yamzil            #+#    #+#              #
#    Updated: 2022/10/11 12:56:01 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CXXFLAGS = -Wall -Wextra -Werror

SRC = 	main.cpp\
		Harl.cpp\

INC = Harl.hpp

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o) 

$(NAME) : $(OBJ) $(INC)
	@c++ $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all