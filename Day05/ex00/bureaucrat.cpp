/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:32:04 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 19:21:56 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	this->grade = grade;
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

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj){
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

void	Bureaucrat::IncrementGrade(){
	if (this->grade - 1 < 1)
		throw (GradeTooHighException());
	this->grade--;
}

void	Bureaucrat::DecrementGrade(){
	if (this->grade + 1  > 150)
	 	throw (GradeTooLowException());
	this->grade++;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj){
	this->grade = obj.grade;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &obj){
	if (this != &obj) this->grade = obj.grade;
	return *this;
}

void	Bureaucrat::SetGrade(int grade){
	this->grade = grade;
}
