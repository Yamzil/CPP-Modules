/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:06:56 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:25:56 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : brain(new Brain)
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

Cat::Cat(const Cat& obj)
{
	this->brain = new Brain;
	*brain = *obj.brain;	
}

Cat&	Cat::operator=(const Cat &obj)
{
	std::cout << "Assignment opertator" << std::endl;
	if (this != &obj){
		this->type = obj.type;
		brain = new Brain(*obj.brain);
	}
	return *this;
}

void	Cat::setType(std::string type)
{
	this->type = type;
}

std::string	Cat::getType() const {return this->type;}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}