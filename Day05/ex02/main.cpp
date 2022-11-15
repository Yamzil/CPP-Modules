/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:00:11 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/01 00:28:24 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat	Exemple1("Simple Form", 145);
		Form *form = new ShrubberyCreationForm(Exemple1.GetName());
		Exemple1.executeForm(*form);
		delete form;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	Exemple2("Simple Form", 25);
		Form *form = new PresidentialPardonForm(Exemple2.GetName());
		Exemple2.executeForm(*form);
		delete form;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	Exemple3("Peter", 72);
		Form *form = new RobotomyRequestForm(Exemple3.GetName());
		Exemple3.executeForm(*form);
		delete form;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}