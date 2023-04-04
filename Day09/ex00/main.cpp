/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:30:20 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/04 18:15:39 by yamzil           ###   ########.fr       */
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
	bool input =  false;
	for (std::string::const_iterator it = line.begin(); it != line.end(); ++it) 
	{
		if (*it == '+' || *it == '-')
			*it++;
		else if (*it == '.')
		{
			if (input)
				return (false);
			else
				input = true;
		}
    	else if (!std::isdigit(*it))
		{
			std::cout << *it << "value not a digit number" << std::endl;
			continue;
		}
	}
	return (false);
}

void	validdateformat(std::string& line)
{
	int year, month, day;
	if (std::sscanf(line.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
	{
		std::cout << "Error invalid date" << std::endl;
		exit (1);
	}
	else if (year < 2008 || year > 2023)
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
		validdateformat(_line);
		std::size_t _pos = line.find("|");
		std::string line_ = line.substr(_pos + 1);
		skipspace(line_);
		validvalueformat(line_);
		// std::cout << ;
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