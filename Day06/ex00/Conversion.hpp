/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:53:25 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/06 23:38:50 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "string"
#include <iostream>
#include <ostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Conversion{
	public:
		Conversion();
		~Conversion();
		Conversion(const Conversion& obj);
		Conversion&	operator=(const Conversion& obj);
		std::string	GetConv() const;
		void		SetConv(std::string num);
		void		IntToOthers(std::string num);
		void		FloatToOthers(std::string num);
		void		charToOther(std::string num);
		void		doubleToOther(std::string num);
		void		NanToOther(std::string num);
		void		NanfTothers(std::string num);
};