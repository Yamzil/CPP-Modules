/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:31:01 by yamzil            #+#    #+#             */
/*   Updated: 2022/09/09 15:58:45 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

void	Contact::setFirstname(std::string First_Name)
{
	this->First_Name = First_Name;
}

std::string	Contact::getFirstname(void)
{
	return First_Name;
}

void	Contact::setLastname(std::string Last_Name)
{
	this->Last_Name = Last_Name;
}

std::string	Contact::getLastname(void)
{ 
	return Last_Name;
}

void	Contact::setNickname(std::string Nickname)
{
	this->Nickname = Nickname;
}

std::string	Contact::getNickname(void)
{
	return Nickname;
}

void	Contact::setPhonenumber(std::string Phone_Number)
{
	this->Phone_Number = Phone_Number;
}

std::string	Contact::getPhonenumber(void)
{
	return Phone_Number;
}

void	Contact::setDarkestsecret(std::string Darkest_Secret)
{
	this->Darkest_Secret  = Darkest_Secret;
}

std::string	Contact::getDarkestsecret(void)
{
	return Darkest_Secret;
}
