/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 06:23:05 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/09 07:04:36 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

