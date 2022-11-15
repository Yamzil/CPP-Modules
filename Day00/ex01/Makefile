# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 00:40:26 by yamzil            #+#    #+#              #
#    Updated: 2022/09/27 22:23:16 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Wextra -Werror

SRC = 	PhoneBook.cpp\
		utils_main.cpp\
		table.cpp\
		main.cpp\

all :$(NAME) 

OBJ = $(SRC:.cpp=.o) 

$(NAME) : $(OBJ)
	c++ -std=c++98 $(CFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(OBJ) $(NAME)

re : fclean all