/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:11:29 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/31 23:52:59 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "bureaucrat.hpp"
#include <atomic>
#include <exception>

int main()
{
	try {
		Bureaucrat	bure("France" , 10);
		Form	obj("TCF", 25, 50);
		try {
			obj.beSigned(bure);	
		} catch (...) {
		}
		bure.signForm(obj);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat	bure_other("USA", 25);
		Form 		obj("TOEFL", 10, 15);
		try {
			obj.beSigned(bure_other);
		} catch (...) {
		}
		bure_other.signForm(obj);
	} catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}