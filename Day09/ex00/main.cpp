/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:30:20 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/07 02:48:26 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	skipspace(std::string& line)
{
	size_t i = 0;
	while (i < line.length())
	{
		while (line[i] == ' ')
		line.erase(i, 1);
		i++;
	}
}

bool	validvalueformat(std::string& line)
{
	int	count = 0;
	if (line.empty())
		return (false);
	for (std::string::const_iterator it = line.begin(); it != line.end(); ++it) 
	{
		if (*it == '.')
		{
			count++;
			if (count != 1)
				return (false);
		}
		else if (!std::isdigit(*it))
			return (false);
	}
	return (true);
}

bool	validdateformat(std::string& line)
{
	int year, month, day;
	if (std::sscanf(line.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		return (false);
	else if (year < 2008 || year > 2023)
		return (false);
	else if (month < 1 || month > 12)
		return (false);
	else if (day < 1 || day > 31)
		return (false);
	else if (month == 2)
	{
		if (day > 29)
			return (false);
	}
	return (true);
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

void	parsingfile(std::ifstream& input_file, std::map<std::string, double> &map_csv)
{
	std::string line;
	(void) map_csv;
	std::getline(input_file, line);
	if (line != "date | value")
			handle_error(2);
	while (std::getline(input_file, line))
	{
		std::size_t pos = line.find("|");
		std::string date = line.substr(0, pos - 1);
		std::string value = line.substr(pos + 2, line.length());
		double value_d;

		if (!value.empty())
			value_d = std::stod(value);
		
		if (pos != std::string::npos && validdateformat(date) && validvalueformat(value) && value_d < 1000 && value_d > 0)
		{
			std::map<std::string, double>::iterator it = map_csv.lower_bound(date);
			if (it->first != date)
				it--;
			std::cout << date << " => " << value << " = " << it->second * value_d << "\n";
		}
		else
		{
			if (value_d < 0)
				std::cout << "Error: not a positive number.\n";
			else if (value_d > 1000)
				std::cout << "Error: too large a number.\n";
	
		}
	}
}

int main(int ac, char **av)
{
	(void) av;
    if (ac == 2)
    {
        std::map<std::string, double> map_csv;
	    std::ifstream	data_base("./data.csv");
        if (!data_base.is_open())
            handle_error(1);
        fillMapWithDatabaseData(data_base, map_csv);
		// std::cout << "file content\n";
		// for (std::map<std::string, std::string>::iterator it = map_csv.begin(); it != map_csv.end(); ++it) {
		// 	std::cout << it->first << " " << it->second << "\n";
		// }
		// std::cout << "end of file content\n";
		
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