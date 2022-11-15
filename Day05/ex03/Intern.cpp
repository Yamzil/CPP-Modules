/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:15:14 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/31 23:22:04 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include <string>
#include <system_error>

Intern::Intern(){}

Intern::Intern(std::string name){
	this->name = name;
}

Intern::~Intern(){}

Intern::Intern(const Intern& obj){
    *this = obj;
}

Intern& Intern::operator=(const Intern &obj){
    if (this != &obj)*this = obj;
	return *this;
}

Form	*Intern::MakePresidentialPardonForm(std::string targetForm){
	return new PresidentialPardonForm(targetForm);
}

Form	*Intern::MakeRobotomyRequestForm(std::string targetForm){
	return new RobotomyRequestForm(targetForm);
}

Form	*Intern::MakeShrubberyCreationForm(std::string targetForm){
	return new ShrubberyCreationForm(targetForm);
}

std::string	Intern::GetName() const{
	return this->name;
}

Form*	Intern::makeForm(std::string FormName, std::string TargetForm)
{
	Intern	obj;
	std::string	select[] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	int i = 0;
	for (; i < 2; i++)
	{
		if (!FormName.compare(select[i]))
			break ;
	}
	switch (i) {
		case 0:
			return (obj.MakePresidentialPardonForm(TargetForm));
			break ;
		case 1:
			return (obj.MakeRobotomyRequestForm(TargetForm));
			break ;
		case 2:
			return (obj.MakeShrubberyCreationForm(TargetForm));
			break ;
		default:
			std::cout << "something is wrong" << std::endl;
	}
	return NULL;
}
