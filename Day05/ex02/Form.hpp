/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:00:04 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 16:54:02 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>

class Form{
	private:
		const std::string 	name;
		bool				sign;
		const int			grade_sign;
		const int			grade_exe;
	public:
		Form();
		Form(const std::string name, const int grade, const int exec);
		virtual ~Form();
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		std::string	GetName(void) const;
		bool	GetSign(void) const;
		int		GetGradeSign(void) const;
		int		GetGradeExe(void) const;
		void	beSigned(class Bureaucrat obj);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);