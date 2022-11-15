# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 22:27:40 by yamzil            #+#    #+#              #
#    Updated: 2022/11/09 22:21:43 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	easyfind

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\

INC =	easyfind.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all