/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:30:24 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 17:03:46 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::cout << "RobotomyRequestForm constructot" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "default destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form(obj)
{  
	std::cout << "copy constructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj){
	(void) obj;
	std::cout << "Assignment opeartor" << std::endl;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.GetGrade() > GetGradeSign() && !GetSign())
		throw (Form::GradeTooLowException());
	srand((int)time(0));
	if ((rand() % 100 + 1) <= 50)
		std::cout << executor.GetName() << ": You have beeem successfully 50% time , keep it up" << std::endl;
	else
	 	std::cout << executor.GetName() << " ,Your mama aint proud of you , SHAME SHAME SHAME !!!!!!" << std::endl;
}
