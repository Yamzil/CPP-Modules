/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:15:20 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:18:57 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::setType(std::string type)
{
	this->type = type;
}

std::string	WrongCat::getType() const {return this->type;}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	this->type = obj.type;
}

WrongCat& WrongCat::operator=(WrongCat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}