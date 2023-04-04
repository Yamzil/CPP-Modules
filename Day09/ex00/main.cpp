/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:30:20 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/04 03:23:03 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	validdatefornmat(std::string& line)
{
	int year, month, day;
	if (std::sscanf(line.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
	{
		std::cout << "Error 2" << std::endl;
		exit (1);
	}
	else if (year < 1000 || year > 9999)
	{
		std::cerr << "Error with year format" << std::endl;
		exit (1);
	}
	else if (month < 1 || month > 12)
	{
		std::cerr << "Error with month format" << std::endl;
		exit (1);
	}
	else if (day < 1 || day > 31)
	{
		std::cerr << "Error with day format" << std::endl;
		exit (1);
	}
}

void	parsefirstline(std::ifstream& input_file)
{
	int	_line = 0;
	std::string	line;
	while (std::getline(input_file, line))
	{
		if (line == "date | value")
			_line++;
	}
	if (_line != 1)
		handle_error(3);
}

void	parsingfile(std::ifstream& input_file)
{
	std::string line;
	std::getline(input_file, line);
	if (line != "date | value")
			handle_error(2);
	while (std::getline(input_file, line))
	{
		std::size_t pos = line.find("|");
		std::string _line = line.substr(0, pos);
		validdatefornmat(_line);
	}
}

// std::string gettingdate(std::ifstream& input_file)
// {
//     std::string line;
//     while (std::getline(input_file, line))
//     {
// 		std::size_t pos = line.find("|");
// 		std::string sub_line = line.substr(0, pos);
// 		std::cout << sub_line << std::endl;
//     }
// }

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::map<std::string, std::string> map_csv;
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
			parsingfile(input_file);
			// checingdate(input_file);
		}
    }
    else
        handle_error(0);
    return 0;
}