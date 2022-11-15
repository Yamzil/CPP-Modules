# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 00:14:10 by yamzil            #+#    #+#              #
#    Updated: 2022/11/02 19:22:16 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	bureaucrat

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	bureaucrat.cpp\
		main.cpp\

INC =	bureaucrat.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all