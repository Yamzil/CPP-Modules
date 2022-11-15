# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 19:55:29 by yamzil            #+#    #+#              #
#    Updated: 2022/10/30 18:56:19 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Intern

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	./bureaucrat.cpp\
		./Form.cpp\
		./ShrubberyCreationForm.cpp\
		./main.cpp\
		./Intern.cpp\
		./PresidentialPardonForm.cpp\
		./RobotomyRequestForm.cpp\

INC =	bureaucrat.hpp\
		Form.hpp\
		Intern.hpp\
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