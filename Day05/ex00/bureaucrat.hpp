/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:17:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 16:24:51 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

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
		Bureaucrat(std::string name, int grade);
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
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