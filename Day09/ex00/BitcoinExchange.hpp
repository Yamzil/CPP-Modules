/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:14:01 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/07 02:04:13 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>

#pragma once


// class BitcoinExchange {
//     public:
//     conver_file_map()
// }

void	fillMapWithDatabaseData(std::ifstream& data_base, std::map<std::string, double> &map_csv);
void 	handle_error(int nb);