/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:01:25 by yamzil            #+#    #+#             */
/*   Updated: 2022/09/28 19:43:44 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
 
int x;

int main() {

	std::string	input;
	PhoneBook	obj;
	int			i;

	i = 0;
	while (1){
	std::cout << std::endl << std::endl;
	std::cout << "Kindly Enter Your Command ! ";
	std::getline(std::cin,input);
	if (std::cin.eof()) exit (1);
    if (!input.compare("ADD")){
		if (i == 8)
			i = 0;
		i = obj.AddToContact(i);
	}
    if (!input.compare("SEARCH")){
		obj.SearchContact();                                          
	}
	if (!input.compare("EXIT"))
		exit (1);
	}
}