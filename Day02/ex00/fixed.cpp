/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:42:29 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/14 15:55:13 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <_stdio.h>
#include <cstring>

Fixed::Fixed()
{
    this->number = 0;
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	number = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}
