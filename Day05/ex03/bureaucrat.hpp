/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:02:42 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 17:05:56 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat{
	private:
		const std::string name;
		int	grade;
	public:
		std::string	GetName(void) const;
		void	SetGrade(int grade);
		int		GetGrade(void) const;
		void	IncrementGrade();
		void	DecrementGrade();
		void	signForm(Form& obj);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		void	executeForm(Form const & form);
		Bureaucrat();
		~Bureaucrat();
		class	GradeTooHighException : public std::exception{
			public:
				char const* what() const throw();
		};
		class	GradeTooLowException : public std::exception{
			public:
				char const* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& print, const Bureaucrat& obj);