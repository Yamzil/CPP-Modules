/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:11:32 by yamzil            #+#    #+#             */
/*   Updated: 2023/03/24 17:04:57 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	fillMapWithDatabaseData(std::ifstram data_base, std::map<std::string, float> map_csv)
{
	data_base("./data.csv");
	std::string	line;
	while (std::getline)
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        // std::ifstream data_base("./data.csv");
        if (!data_base.is_open())
        {
            std::cerr << "cannot open the file" << std::endl;
            return 1;
        }
        // std::map<std::string, float> map_csv;
        std::string line;
        while (std::getline(data_base, line))
        {
            std::string date;
            float price;
            std::istringstream ss(line);
            ss >> date >> price;
            map_csv[date] = price;
        }
        std::ofstream output(av[1]);
        data_base.close();
    }
    else
    {
        std::cerr << "usage: " << av[0] << " output_file" << std::endl;
        return 1;
    }

    return 0;
}

