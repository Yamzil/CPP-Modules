/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:29:52 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 17:03:29 by yamzil           ###   ########.fr       */
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
    std::cout << "default PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj)
{  
	std::cout << "copy PresidentialPardonForm constructor" << std::endl;
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
