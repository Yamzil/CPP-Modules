/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:17:12 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/16 17:28:27 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cmath>

#define SHIFT 8;

class Fixed{
private:
    int number;
    static const int fractiobal_bits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &obj);
	Fixed&	operator= (const Fixed &other);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool 	operator==(const Fixed& c1);
	bool	operator!=(const Fixed& c1);
	bool	operator>(const Fixed& c1);
	bool	operator>=(const Fixed& c1);
	bool	operator<(const Fixed& c1);
	bool	operator<=(const Fixed& c1);
	Fixed	operator+(const Fixed &c1);
	Fixed	operator-(const Fixed& c1);
	Fixed	operator*(const Fixed& c1);
	Fixed	operator/(const Fixed& c1);
	static Fixed&	min(Fixed& parm1, Fixed& param2);
	static Fixed	min(const Fixed& parm1, const Fixed& param2);
	static Fixed&	max(Fixed& parm1, Fixed& param2);
	static Fixed	max(const Fixed& parm1, const Fixed& param2);
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
};
std::ostream&	operator<<(std::ostream& print, const Fixed& fixed);
std::ostream&	operator<<(std::ostream& print, Fixed& fixed);
