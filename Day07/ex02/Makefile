# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 17:10:06 by yamzil            #+#    #+#              #
#    Updated: 2022/11/05 00:37:39 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Array

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\

INC =	Array.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all