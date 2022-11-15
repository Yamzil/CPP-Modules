/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:30:44 by yamzil            #+#    #+#             */
/*   Updated: 2022/09/28 20:00:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip> 

extern int x;

class Contact{
private:
    std::string First_Name;
    std::string Last_Name;
    std::string Nickname;
    std::string Phone_Number;
    std::string Darkest_Secret;
public:
	void	setDarkestsecret(std::string secret);
	void 	setNickname(std::string nickname);
	void	setPhonenumber(std::string num);
    void	setFirstname(std::string name);
	void	setLastname(std::string name);
	std::string	getDarkestsecret(void);
	std::string	getPhonenumber(void);
	std::string	getFirstname(void);
	std::string	getNickname(void);
	std::string	getLastname(void);

};

class PhoneBook{
public:
    Contact Contact[8];
	void	DisplayContact(std::string j);
	int		AddToContact(int i);
	void	DisplayContact(void);
	void    SearchContact(void);
};

void	FirstTable(void);
int		EmptyInput(std::string str);
