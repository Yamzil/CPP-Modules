/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:32:32 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/01 00:31:37 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "bureaucrat.hpp"
#include <exception>

int main()
{
	Intern		someRandomIntern("Mr Moral");
	Bureaucrat	form("Bender", 150);
	Form*	rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
	if (rrf)
	{
		try {
			form.signForm(*rrf);
			std::cout << someRandomIntern.GetName() << " create " << rrf->GetName() << std::endl;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}