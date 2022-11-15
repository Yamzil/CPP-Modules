# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 15:54:29 by yamzil            #+#    #+#              #
#    Updated: 2022/10/11 12:55:22 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = no_trick

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp\

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	c++ $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all