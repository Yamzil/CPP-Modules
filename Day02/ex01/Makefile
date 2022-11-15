# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 22:51:45 by yamzil            #+#    #+#              #
#    Updated: 2022/10/14 16:04:59 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp\
		Fixed.cpp\

INC = Fixed.hpp

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	c++ $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all