/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:22:05 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/12 18:52:42 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **argv)
{
	if (ac == 4){
		std::ifstream 	old_file(argv[1]);
		std::string		s1(argv[2]);
		if (s1.empty()) return 1;
		std::string		s2(argv[3]);
		if (s1 == s2){
			std::ofstream	new_file(std::string(argv[1]) + ".replace");
			if (new_file.fail()) return 1;
			std::string		line;
			if (!old_file.is_open()) return 1;
			std::getline(old_file, line, '\0');
			new_file << line << "\n";
		}
		else {
		std::ofstream	new_file(std::string(argv[1]) + ".replace");
		if (new_file.fail()) return 1;
		std::string		line;
		if (!old_file.is_open())
			return 1;
		else {
			while (std::getline(old_file, line))
			{
				size_t	finder = line.find(s1);
				while ((finder = line.find(s1)) != std::string::npos)
				{
					line.erase(finder, s1.length());
					line.insert(finder, s2);
					finder += line.length();
				}
				new_file << line << "\n";
			}
		}
		}
	}
	else {
		std::cerr << "Invalid number of argumemnts" << std::endl;
		return 1;
	}
}
