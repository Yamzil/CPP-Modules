# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 17:51:36 by yamzil            #+#    #+#              #
#    Updated: 2022/11/04 15:03:13 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	convert

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	Conversion.cpp\
		main.cpp\

INC =	Conversion.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all