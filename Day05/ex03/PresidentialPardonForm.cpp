/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:04:44 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 17:09:31 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "bureaucrat.hpp"
#include <string>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	std::cout << "PresidentialPardonForm's constructot" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "default destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj)
{  
	std::cout << "copy constructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj){
	(void) obj;
	std::cout << "Assignment operator" << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.GetGrade() > GetGradeSign() && !GetSign())
		throw (Form::GradeTooLowException());
	std::cout << executor.GetName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
