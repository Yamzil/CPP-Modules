/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:30:20 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/03 02:49:46 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// void    checkingDateForma(std::string line)
// {
// }

void    gettingdate(std::ifstream& input_file)
{
    std::string line;
    while (std::getline(input_file, line))
    {
        int i = 0;
        if (line[i] == '|')
            printf("%hhd\n", line[i]);
    }
}

int main(int ac, char **av)
{
	(void) av;
    if (ac == 2)
    {
        std::map<std::string, std::string> map_csv;
	    std::ifstream	data_base("./data.csv");
        if (!data_base.is_open())
            handle_error(1);
        fillMapWithDatabaseData(data_base, map_csv);
        std::ifstream	input_file(av[1]);
        if (input_file.is_open())
            gettingdate(input_file);
    }
    else
        handle_error(0);
    return 0;
}