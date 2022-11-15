/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:55:38 by yamzil            #+#    #+#             */
/*   Updated: 2022/09/30 16:06:35 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "\033[3;47;35mMemory Adress: \033[0m\t\t" << std::endl;
	std::cout << "String's Memory Adress: " << &str << std::endl;
	std::cout << "Memory Adress Held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Adress Held by stringREF: " << &stringREF << std::endl;
	std::cout << "\033[3;47;35mValue:\033[0m\t\t" << std::endl;
	std::cout << "The value of string: " << str << std::endl;
	std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF: " << stringREF << std::endl;
}