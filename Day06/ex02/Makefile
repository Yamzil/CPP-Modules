# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 22:42:32 by yamzil            #+#    #+#              #
#    Updated: 2022/11/05 17:30:20 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Identify_real_type

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	Base.cpp\
		main.cpp\

INC =	Base.hpp\
		A.hpp\
		B.hpp\
		C.hpp\
		
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all