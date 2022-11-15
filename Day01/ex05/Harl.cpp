/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 02:35:38 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/11 14:03:05 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[DEBUG]" << std::endl;
  std::cout << "If you run a debuger anywhere in the state of Washington, they "
               "will force you to move south and find another job!"
            << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "The answer to life, the universe and everything is [42], but he question is unknown." << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "POSTSECRET hasn't been updated today so don't bother looking at it yet.." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "Illegal Operation. Restart the GODDAMN computer, assclown." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*array[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string select[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (!level.compare(select[i])){
			(this->*array[i])();		
		}
		i++;
	}
}