# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 15:21:18 by yamzil            #+#    #+#              #
#    Updated: 2022/10/11 18:51:10 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp\

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o) 

$(NAME) : $(OBJ)
	@c++ $(CXXFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all