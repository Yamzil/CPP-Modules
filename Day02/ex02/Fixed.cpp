/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:17:50 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/16 17:33:44 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cstring>
#include <string>
#include <fstream>
#include <ostream>

Fixed::Fixed()
{
    this->number = 0;
}

Fixed::Fixed(const int number)
{
	this->number = number << SHIFT;
}

Fixed::Fixed(const float number)
{
	this->number = roundf(number * 256);
}

Fixed::Fixed(const Fixed &obj)
{
	memcpy(this, &obj, sizeof(Fixed));
}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (*this == other) return *this;
	this->number = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

float	Fixed::toFloat() const
{
	return ((float )number / 256);
}

int Fixed::toInt() const 
{
	return number >> 8;
}

int	Fixed::getRawBits(void) const
{
	return this->number;
}

std::ostream&	operator<<(std::ostream& print, const Fixed& fixed)
{
	std::cout << fixed.toFloat() << std::endl;
	return print;
}

std::ostream&	operator<<(std::ostream& print, Fixed& fixed)
{
	print << fixed.toFloat()<< std::endl;
	return print;
}

bool	Fixed::operator==(const Fixed& c1)
{
	if (this->number == c1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& c1)
{
	if (this->number != c1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(const Fixed &c1)
{
	if (this->number > c1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed &c1)
{
	if (this->number >= c1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed &c1)
{
	if (this->number < c1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed &c1)
{
	if (this->number <= c1.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+(const Fixed &c1)
{
	return this->getRawBits()  + c1.getRawBits();
}

Fixed	Fixed::operator-(const Fixed &c1)
{ 
	return (this->getRawBits() - c1.getRawBits());
}

Fixed	Fixed::operator*(const Fixed &c1)
{
	return (this->toFloat() * c1.toFloat());
}

Fixed	Fixed::operator/(const Fixed &c1)
{
	return (this->toFloat()  / c1.toFloat());
}

Fixed&	Fixed::operator++()
{
	++this->number;
	return *this;	
}

Fixed&	Fixed::operator--()
{
	--this->number;
	return *this;	
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	
	++(*this);
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	
	--(*this);
	return temp;
}

Fixed&	Fixed::min(Fixed& param1, Fixed& param2)
{
	if (param1.number < param2.number)
		return param1;
	return param2;
}

Fixed	Fixed::min(const Fixed& param1, const Fixed& param2)
{
	if (param1.number < param2.number)
		return param1;
	return param2;
}

Fixed&	Fixed::max(Fixed& param1, Fixed& param2)
{
	if (param1.number > param2.number)
		return param1;
	return param2;
}

Fixed	Fixed::max(const Fixed& param1, const Fixed& param2)
{
	if (param1.number > param2.number)
		return param1;
	return param2;
}
