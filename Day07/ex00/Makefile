# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:30:36 by yamzil            #+#    #+#              #
#    Updated: 2022/10/26 18:39:01 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	whatever

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\

INC =	 whatever.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all