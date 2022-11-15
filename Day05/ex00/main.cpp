/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:55:05 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/02 16:33:29 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include <exception>

int main() 
{
	int	HighGrade = 1;
	int LowGrade = 150;
	try {
		Bureaucrat other_obj("the aristocrat", HighGrade);
		std::cout << other_obj.GetName() << " grade is " <<  other_obj.GetGrade() << std::endl;
  	} catch (std::exception& exception) {
		std::cout << exception.what() << std::endl;
 	}
	std::cout << std::endl << std::endl;
	try {
		Bureaucrat obj("the bureaucrat",LowGrade);
		std::cout << obj.GetName() << " grade is " <<  obj.GetGrade() << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
