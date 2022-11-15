# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 22:27:49 by yamzil            #+#    #+#              #
#    Updated: 2022/09/07 14:10:40 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o) 

$(NAME) : $(OBJ)
	@c++ -std=c++98 $(CFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all