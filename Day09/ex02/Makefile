# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 08:41:03 by yamzil            #+#    #+#              #
#    Updated: 2023/04/13 01:37:43 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  PmergeMe

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

FILE = input.txt

SRC = 	main.cpp\
		vector.cpp\
		deque.cpp\
		PmergeMe.cpp\

INC = PmergeMe.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all