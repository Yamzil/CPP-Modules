# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 22:08:07 by yamzil            #+#    #+#              #
#    Updated: 2022/10/20 13:32:18 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Form

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	bureaucrat.cpp\
		Form.cpp\
		main.cpp\

INC =	bureaucrat.hpp\
		Form.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all