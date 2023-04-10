/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:14:01 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/09 06:54:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <map>
#include <cstdlib>
#include <sstream>
 
#pragma once


// class BitcoinExchange {
//     public:
//     conver_file_map()
// }

void	fillMapWithDatabaseData(std::ifstream& data_base, std::map<std::string, double> &map_csv);
void	parsefirstline(std::ifstream& input_file);
bool	validvalueformat(std::string& line);
bool	validdateformat(std::string& line);
void 	handle_error(int nb);