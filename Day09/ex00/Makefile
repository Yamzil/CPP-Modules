# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 18:16:34 by yamzil            #+#    #+#              #
#    Updated: 2023/04/09 06:23:28 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

FILE = input.txt

SRC = 	main.cpp\
		utils.cpp\
		BitcoinExchange.cpp\

INC = BitcoinExchange.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	

$(NAME): $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ) $(NAME)

re: fclean all