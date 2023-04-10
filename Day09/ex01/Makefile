# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 08:11:26 by yamzil            #+#    #+#              #
#    Updated: 2023/04/09 12:21:19 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

FILE = input.txt

SRC = 	main.cpp\
		RPN.cpp\

INC = RPN.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all