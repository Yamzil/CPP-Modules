/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 06:23:05 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 18:01:23 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void 	handle_error(int nb)
{
	if (nb == 0){
		std::cerr << "Few argumments proved" << std::endl;
    	exit (0);
	}
	else if (nb == 1){
		std::cerr << "cannot open the file" << std::endl;
    	exit (0);
	}
	else if (nb == 2){
		std::cerr << "first line should be date | value" << std::endl;
	}
	else if (nb == 3){
		std::cerr << "file has multiple/or no date | value" << std::endl;
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
			try {
				price = std::stod(line.substr(pos + 1));
			}
			catch (const std::exception& e){
				std::cerr << e.what() << '\n';
			}
			map_csv.insert(std::make_pair(date, price));
		}
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
			if (count != 1 || it == line.begin() || it == line.end() - 1)
				return (false);
		}
		else if (!std::isdigit(*it) || std::atoi(line.c_str()) < 0 || std::atoi(line.c_str()) > 1000)
			return (false);
	}
	return (true);
}

bool	validdateformat(std::string& line)
{
	for (size_t i = 0; i < line.size(); i++){
		if (!std::isdigit(line[i]) && line[i] != '-')
			return false;
	}
	int year, month, day;
	if (std::sscanf(line.c_str(), "%d-%d-%d", &year, &month, &day) != 3 || line.length() != 10)
		return (false);
	if (year < 2008 || year > 2023)
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
