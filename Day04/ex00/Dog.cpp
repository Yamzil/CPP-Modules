/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:15:22 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:29:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog's constructor" << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Dog's destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bark Bark !" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
}

Dog& Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}