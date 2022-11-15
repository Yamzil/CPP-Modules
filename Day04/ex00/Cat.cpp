/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:19:12 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:28:41 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat's constructor" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat's destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow !" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
}

Cat& Cat::operator=(Cat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}
