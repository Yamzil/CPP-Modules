/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:53:25 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/07 14:52:08 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <_ctype.h>
#include <cstdint>
#include <exception>
#include <iomanip>
#include <new>
#include <string>
#include <iostream>

Conversion::Conversion(){}

Conversion::~Conversion(){}

Conversion::Conversion(const Conversion& obj){
    *this = obj;
}

Conversion& Conversion::operator=(const Conversion& obj){
    if (this != &obj) *this = obj;
    return *this;
}

void	Conversion::IntToOthers(std::string num)
{
	try {
		int num_int = std::stoi(num);
		std::cout << "int: " << num_int << std::endl;
		float f_num = static_cast<float>(num_int);
		std::cout << std::fixed;
		std::cout << "float: " << std::setprecision(1) << f_num << "f" << std::endl;
		char char_num = static_cast<char>(num_int);
		if (isprint(char_num)) std::cout << "char: " << char_num << std::endl;
		else std::cout << "char: " << "Non displayable" << std::endl;
		double	d_num = static_cast<double>(num_int);
		std::cout << "double: " << d_num << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Conversion::FloatToOthers(std::string num)
{
	try {
		float num_float = std::stof(num);
		std::cout << std::fixed;
		std::cout << "float: " << std::setprecision(1) << num_float << "f" << std::endl;
		char num_char = static_cast<char>(num_float);
		std::cout << "char: " << num_char << std::endl;
		int	num_int = static_cast<int>(num_float);
		std::cout << "int: " << num_int << std::endl;
		double	num_double = static_cast<double>(num_float);
		std::cout << "double: " << num_double << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Conversion::charToOther(std::string num)
{
	try {
		std::cout << "char: " << num << std::endl;
		std::cout << std::fixed;
		std::cout << "float: " << std::setprecision(1) << static_cast<float>(num[0]) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num[0]) << std::endl;
		std::cout << "int: " << static_cast<int>(num[0]) << std::endl;
	} catch (...) {
		std::cout << "impossible" << std::endl;
	}
}

void	Conversion::doubleToOther(std::string num)
{
	try {
		double	_num =  std::stod(num);
		std::cout << "double: " << _num << std::endl;
		int	_num_int = static_cast<int>(_num);
		std::cout << "int: " << _num_int << std::endl;
		float _num_float = static_cast<float>(_num);
		std::cout << std::fixed;
		std::cout << "float: " << std::setprecision(1) << _num_float << "f" << std::endl;
		char	_num_char = static_cast<char>(_num);
		if (isprint(_num_char)) std::cout << "char: " << _num_char << std::endl;
		else std::cout << "char: " << "Non displayable" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Conversion::NanToOther(std::string num)
{
	try {
		double	_num =  std::stod(num);
		std::cout << "double: " << _num << std::endl;
		int	_num_int = static_cast<int>(_num);
		if (_num_int < INT32_MIN) std::cout << "int: " << _num_int << std::endl;
		else std::cout << "int : Impossible" << std::endl;
		float _num_float = static_cast<float>(_num);
		std::cout << std::fixed;
		std::cout << "float: " << std::setprecision(1) << _num_float << "f" << std::endl;
		char	_num_char = static_cast<char>(_num);
		if (isprint(_num_char)) std::cout << "char: " << _num_char << std::endl;
		else std::cout << "char: " << "Impossible" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Conversion::NanfTothers(std::string num)
{
	try {
		float num_float = std::stof(num);
		std::cout << std::fixed;
		std::cout << "float: " << std::setprecision(1) << num_float << "f" << std::endl;
		char	_num_char = static_cast<char>(num_float);
		if (isprint(_num_char)) std::cout << "char: " << _num_char << std::endl;
		else std::cout << "char: " << "Impossible" << std::endl;
		int	num_int = static_cast<int>(num_float);
		if (num_int < INT32_MIN) std::cout << "int: " << num_int << std::endl;
		else std::cout << "int : Impossible" << std::endl;
		double	num_double = static_cast<double>(num_float);
		std::cout << "double: " << num_double << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
