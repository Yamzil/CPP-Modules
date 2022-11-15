/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:53:25 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/03 15:53:46 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <type_traits>
#include <cmath>

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
};
std::ostream&	operator<<(std::ostream& print, Fixed& fixed);
std::ostream&	operator<<(std::ostream& print, Fixed const& fixed);