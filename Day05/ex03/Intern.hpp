/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:15:13 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/31 22:42:04 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

class Form;
class Intern{
  private:
    std::string name;
  public:
    Intern();
    Intern(std::string name);
    ~Intern();
    Intern(const Intern& obj);
	std::string	GetName() const;
    Intern&	operator=(const Intern& obj);
	Form	*MakePresidentialPardonForm(std::string targetForm);
	Form	*MakeRobotomyRequestForm(std::string targetForm);
	Form	*MakeShrubberyCreationForm(std::string targetForm);
	Form	*makeForm(std::string FormName, std::string TargetForm);
};
