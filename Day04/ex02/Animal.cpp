/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:22:27 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:17:16 by yamzil           ###   ########.fr       */
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

std::string	Animal::getType() const { return this->type;}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}