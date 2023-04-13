/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:30:20 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 17:45:51 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	parsingfile(std::ifstream& input_file, std::map<std::string, double> &map_csv)
{
	std::string line;
	std::getline(input_file, line);
	if (line != "date | value")
			handle_error(2);
	while (std::getline(input_file, line))
	{
		if (!line.empty())
		{
			std::size_t pos = line.find("|");
			std::string date = line.substr(0, pos - 1);
			std::string value = line.substr(pos + 2, line.length());
			if (pos != std::string::npos && validdateformat(date) && validvalueformat(value))
			{
				std::map<std::string, double>::iterator it = map_csv.lower_bound(date);
				if (it != map_csv.begin() && it->first != date)
					it--;
				std::cout << date << " => " << value << " = " << std::setprecision(7) << it->second * std::stod(value) << std::endl;
			}
			else if (!validvalueformat(value) || !validdateformat(date))
				std::cout << "Error: Bad input" << std::endl;
		}
	}
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::map<std::string, double> map_csv;
	    std::ifstream	data_base("./data.csv");
        if (!data_base.is_open())
            handle_error(1);
        fillMapWithDatabaseData(data_base, map_csv);
        std::ifstream	input_file(av[1]);
        if (input_file.is_open())
		{
            parsefirstline(input_file);
			input_file.clear();
			input_file.seekg(0, std::ios::beg);
			parsingfile(input_file, map_csv);
		}
    }
    else
        handle_error(0);
    return 0;
}