# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 22:44:47 by yamzil            #+#    #+#              #
#    Updated: 2022/11/09 21:42:05 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Span

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\

INC =	Span.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all