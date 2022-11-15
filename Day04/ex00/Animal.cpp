/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:15:56 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:16:01 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type){
	this->type = type;
}
Animal::Animal(){std::cout << "Animal's contructor" << std::endl;}

Animal::~Animal()
{
	std::cout << "Animal's destructor" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	this->type = obj.type;
}

Animal& Animal::operator=(Animal& obj){
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

std::string	Animal::getType() const {
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "sound for a random animal" << std::endl;
}