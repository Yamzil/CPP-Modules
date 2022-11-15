/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:07:26 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:25:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : brain(new Brain)
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
	delete brain;
}

void	Dog::setType(std::string type)
{
	this->type = type;
}

std::string	Dog::getType() {return this->type;}

void	Dog::makeSound() const
{
	std::cout << "Bark Bark !" << std::endl;
}

Dog::Dog(const Dog& obj)
{
	std::cout << "copy constructor called" << std::endl;
	this->brain = new Brain;
	*brain = *obj.brain;
}

Dog&	Dog::operator=(const Dog &obj)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &obj){
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
}