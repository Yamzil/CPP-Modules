# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 16:55:40 by yamzil            #+#    #+#              #
#    Updated: 2022/10/26 21:56:25 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	iter

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\

INC =	iter.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all