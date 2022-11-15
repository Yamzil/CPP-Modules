/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:57:42 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/14 16:03:03 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <_stdio.h>
#include <cstring>
#include <fstream>
#include <ostream>

Fixed::Fixed()
{
    std::cout << "Default Constructor called" << std::endl;
    this->number = 0;
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

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = number << 8;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(number * 256);
}



Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

float	Fixed::toFloat() const
{
	return ((float) number) / 256;
}

int Fixed::toInt() const 
{
	return (int) number >> 8;
}

int	Fixed::getRawBits(void) const
{
	return this->number;
}

std::ostream&	operator<<(std::ostream& print, Fixed& fixed)
{
	print << fixed.toFloat() << std::endl;
	return print;
}

std::ostream&	operator<<(std::ostream& print, Fixed const& fixed)
{
	print << fixed.toFloat() << std::endl;
	return print;
}
