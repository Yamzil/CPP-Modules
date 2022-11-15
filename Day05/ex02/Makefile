# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:24:22 by yamzil            #+#    #+#              #
#    Updated: 2022/10/22 19:55:46 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	twenty_eightBnC

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		main.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\

INC =	bureaucrat.hpp\
		Form.hpp\
		PresidentialPardonForm.hpp\
		RobotomyRequestForm.hpp\
		ShrubberyCreationForm.hpp\
	
all :$(NAME) 

OBJ = $(SRC:%.cpp=%.o)

$(NAME) : $(OBJ) $(INC)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all