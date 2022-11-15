/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:28:37 by yamzil            #+#    #+#             */
/*   Updated: 2022/09/28 18:02:01 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <cstring>

void   FirstTable(void)
{
    for (int i = 0; i < 44 ; i++) std::cout << "=";
	std::cout << std::endl << std::endl;
	std::cout << std::right;
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|";
	std::cout << std::endl << std::endl;
	for (int i = 0; i < 44 ; i++) std::cout << "=";
}
