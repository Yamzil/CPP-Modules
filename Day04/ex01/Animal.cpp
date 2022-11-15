/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:04:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:16:47 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){std::cout << "Animal contructor" << std::endl;}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	this->type = obj.type;
}

Animal&	Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

std::string	Animal::getType() const { return this->type;}

void	Animal::makeSound() const
{
	std::cout << "sound for a random animal" << std::endl;
}