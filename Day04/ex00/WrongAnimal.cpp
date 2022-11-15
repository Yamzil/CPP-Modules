/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:13:41 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:16:24 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << "WrongAnimal contructor" << std::endl;}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	this->type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& obj){
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

std::string	WrongAnimal::getType() const { return this->type;}

void	WrongAnimal::makeSound() const
{
	std::cout << "sound for a random WrongAnimal" << std::endl;
}