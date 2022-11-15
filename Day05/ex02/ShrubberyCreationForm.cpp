/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:30:50 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 17:10:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	std::cout << "ShrubberyCreationForm constructot" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "default destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form(obj)
{  
	std::cout << "copy constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj){
    (void) obj;
    std::cout << "Assignmet operator" << std::endl;
    return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.GetGrade() > GetGradeSign() && !GetSign())
		throw (Form::GradeTooLowException());
	std::ofstream file(executor.GetName() + "_shrubbery");
	file << "                  \n"
                  "%%%,%%%%%%%\n"
                   ",'%% \\-*%%%%%%%\n"
            " ;%%%%%*%   _%%%%\n"
            "  ,%%%       (_.*%%%%.\n"
            "  % *%%, ,%%%%*(    '\n"
            "%^     ,*%%% )|,%%*%,_\n"
                "*%    / #).-*%%*\n"
                    " _.) ,/ *%,\n"
             "_________/)#(_____________\n";
}