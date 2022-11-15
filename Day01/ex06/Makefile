# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 18:31:28 by yamzil            #+#    #+#              #
#    Updated: 2022/10/10 20:59:13 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

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