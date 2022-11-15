/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:56:51 by yamzil            #+#    #+#             */
/*   Updated: 2022/09/28 20:48:01 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

int	EmptyInput(std::string str)
{
	if (str == "")
	{
		std::cerr << "\x1B[31mBlank Filed ... Please fill it out with propriete informations !\033[0m\t\t" << std::endl;
		return 0;
	}
	return 1;
}

std::string	ft_substr(std::string str)
{
	if (str.length() >= 10){
		str = str.substr(0,9);
		str += ".";
	}
	return str;
}

int	PhoneBook::AddToContact(int i)
{
	std::string	input;
	std::cout << "CONTACT N("<< i + 1 <<")"<<std::endl;
	std::cout << "Enter Your first Name: ";
	std::getline(std::cin, input);
	if (std::cin.eof()) exit (1);
	while (!EmptyInput(input))
	{
		std::cout << "Enter Your first Name: ";
		std::getline(std::cin, input);
		if (std::cin.eof()) exit (1);
		Contact[i].setFirstname(ft_substr(input));
	}
	Contact[i].setFirstname(ft_substr(input));

	std::cout << "Enter Your Last Name: ";
	std::getline(std::cin, input);
	if (std::cin.eof()) exit (1);
	while (!EmptyInput(input))
	{
		std::cout << "Enter Your Last Name: ";
		std::getline(std::cin, input);
		if (std::cin.eof()) exit (1);
		Contact[i].setLastname(ft_substr(input));
	}
	Contact[i].setLastname(ft_substr(input));

	std::cout << "Enter Your Nickname: ";
	std::getline(std::cin, input);
	if (std::cin.eof()) exit (1);
	while (!EmptyInput(input))
	{
		std::cout  << "Enter Your Nickname: ";
		std::getline(std::cin, input);
		if (std::cin.eof()) exit (1);
		Contact[i].setNickname(ft_substr(input));	
	}
	Contact[i].setNickname(ft_substr(input));
	
	std::cout << "Enter Your Phone Number: ";
	std::getline(std::cin, input);
	if (std::cin.eof()) exit (1);
	while (!EmptyInput(input))
	{
		std::cout << "Enter Your Phone number: ";
		std::getline(std::cin, input);
		if (std::cin.eof()) exit (1); 
		Contact[i].setPhonenumber(ft_substr(input));	
	}	
	Contact[i].setPhonenumber(ft_substr(input));

	std::cout << "Enter Your Darkest Secret: ";
	std::getline(std::cin, input);
	if (std::cin.eof()) exit (1);
	while (!EmptyInput(input))
	{
		std::cout << "Enter Your Darkest Secret: ";
		std::getline(std::cin, input);
		if (std::cin.eof()) exit (1);
		Contact[i].setDarkestsecret(ft_substr(input));		
	}	
	Contact[i].setDarkestsecret(ft_substr(input));
	i++;
	if (x < 8)
		x++;
	return	i;
}

void	PhoneBook::DisplayContact(std::string j)
{
	int num = atoi(j.c_str());
	if (num < 0) return;
	if (num < x){
		for (int i = 0; i < 65 ; i++) std::cout << "=";
		std::cout << std::endl << std::endl;
		std::cout << std::right;
		std::cout << std::setw(10) << j;
		std::cout << "|";
		std::cout << std::setw(10) << Contact[num].getFirstname();
		std::cout << "|";
		std::cout << std::setw(10) << Contact[num].getLastname();
		std::cout << "|";
		std::cout << std::setw(10) << Contact[num].getNickname();
		std::cout << "|";
		std::cout << std::setw(10) << Contact[num].getPhonenumber();
		std::cout << "|";
		std::cout << std::setw(10) << Contact[num].getDarkestsecret();
		std::cout << std::endl << std::endl;
		for (int i = 0; i < 65 ; i++) std::cout << "=";
	}
}

void	PhoneBook::DisplayContact(void)
{
	int index = 0;
	while (index < x){

		std::cout << std::endl << std::endl;
		std::cout << std::right;
		std::cout << std::setw(10) << index;
		std::cout << "|";
		std::cout << std::setw(10) << Contact[index].getFirstname();
		std::cout << "|";
		std::cout << std::setw(10) << Contact[index].getLastname();
		std::cout << "|";
		std::cout << std::setw(10) << Contact[index].getNickname();
		std::cout << "|";
		std::cout << std::endl << std::endl;
		index++;
	}
}

void    PhoneBook::SearchContact(void)
{
	std::string	index;
	std::cout << std::endl << std::endl;
	std::cout << "\x1B[32m      Contact Table        \033[0m\t\t";
	std::cout << std::endl << std::endl;
	FirstTable();
	DisplayContact();
	std::cout << std::endl << std::endl;
	std::cout << "Enter an index betweeen 0 - 7 " << std::endl;
	std::getline(std::cin, index);
	if (std::cin.eof()) exit (1);
	DisplayContact(index);
}