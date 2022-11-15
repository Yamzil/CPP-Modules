/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:12:18 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 16:53:18 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "bureaucrat.hpp"

Form::Form(const std::string name, const int grade_sign, const int grade_exe) : name(name) , sign(false) , grade_sign(grade_sign) , grade_exe(grade_exe){
	std::cout << "Form constructor" << std::endl;
	if (this->grade_sign > 150)
		throw (GradeTooLowException());
	else if (this->grade_sign < 1)
	 	throw (GradeTooHighException());
}

char const *Form::GradeTooHighException::what() const throw(){
	return "Too High";
}

char const *Form::GradeTooLowException::what() const throw(){
	return "Too Low";
}

Form::Form() : grade_sign(0), grade_exe(0){
	std::cout << "default constructor" << std::endl;
}

Form::~Form(){
	std::cout << "default destructor" << std::endl;
}

Form::Form(const Form& obj) : name(obj.name) , sign(obj.sign) , grade_sign(obj.grade_sign) , grade_exe(obj.grade_exe){
	std::cout << "Copy constructor" << std::endl;
}

Form& Form::operator=(const Form &obj){
	if (this == &obj)
		this->sign = obj.sign;
	std::cout << "Assignment operator" << std::endl;
	return	*this;
}

std::string Form::GetName() const{
	return this->name;
}

bool	Form::GetSign() const{
	return this->sign;
}

int		Form::GetGradeSign() const{
	return this->grade_sign;
}

int		Form::GetGradeExe() const{
	return this->grade_exe;
}
std::ostream&	operator<<(std::ostream& os, const Form& obj){
	os << obj.GetName() << obj.GetGradeSign() << std::endl;
	return os;
}

void	Form::beSigned(class Bureaucrat obj){
	if (obj.GetGrade() <= this->grade_sign)
		this->sign = true;
	else
		throw(Form::GradeTooLowException());
}
