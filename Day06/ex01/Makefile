# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 18:58:52 by yamzil            #+#    #+#              #
#    Updated: 2022/10/24 20:55:11 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Serialization

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	serialize.cpp\
		main.cpp\

INC =	serialize.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all