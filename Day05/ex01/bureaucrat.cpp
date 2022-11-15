/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:09:39 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 16:34:26 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <memory>

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) , grade (grade)
{
	std::cout << "Bureaucrat constructor" << std::endl;
	if (this->grade > 150)
		throw (GradeTooLowException());
	else if (this->grade < 1)
		throw (GradeTooHighException());
}

char const *Bureaucrat::GradeTooHighException::what() const throw(){
	return "Too High";
}

char const *Bureaucrat::GradeTooLowException::what() const throw(){
	return "Too Low";
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.GetName();
	return	os;
}

std::string Bureaucrat::GetName() const{
    return this->name;   
}

int	Bureaucrat::GetGrade() const{
	return this->grade;
}
Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat constructor" << std::endl;
}

void	Bureaucrat::IncrementGrade()
{
	if (this->grade - 1 < 1)
		throw (GradeTooHighException());
	this->grade--;	
}

void	Bureaucrat::DecrementGrade()
{
	if (this->grade + 1 > 150)
		throw (GradeTooLowException());
	this->grade++;
}

void	Bureaucrat::SetGrade(int grade){
	this->grade = grade;
}

void	Bureaucrat::signForm(Form& obj)
{
	if (obj.GetSign())
		std::cout << *this << " signed " << obj.GetName() << std::endl;
	else
		std::cout << *this << " couldnt signed " << obj.GetName() << " because, " << obj.GetGradeSign() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name) , grade(obj.grade){
	std::cout << "copy constructor" << std::endl;
}