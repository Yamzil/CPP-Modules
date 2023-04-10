/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:11:32 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/09 01:59:06 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void 	handle_error(int nb)
{
	if (nb == 0)
	{
		std::cerr << "Few argumments proved" << std::endl;
    	exit (0);
	}
	else if (nb == 1)
	{
		std::cerr << "cannot open the file" << std::endl;
    	exit (0);
	}
	else if (nb == 2)
	{
		std::cerr << "first line should be date | value" << std::endl;
    	exit (0);
	}
	else if (nb == 3)
	{
		std::cerr << "file has multiple/or no date | value" << std::endl;
    	exit (0);
	}
}

void	fillMapWithDatabaseData(std::ifstream& data_base, std::map<std::string, double> &map_csv)
{
	std::string	line;
	std::getline(data_base, line);
	double price;
	while (std::getline(data_base, line))
    {
		std::size_t pos = line.find(",");
		if (pos != std::string::npos)
		{
			std::string date = line.substr(0, pos);
			try{
				price = std::stod(line.substr(pos + 1));
			}
			catch(const std::exception& e){
				std::cerr << e.what() << '\n';
			}
			map_csv.insert(std::make_pair(date, price));
		}
    }
	// std::map<std::string, std::string>::iterator it = map_csv.begin();
	// while (it != map_csv.end())
	// {
	// 	std::cout << it->first << "	" << it->second << std::endl;
	// 	it++;
	// }
}
