/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:59:52 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/07 14:52:45 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <cctype>
#include <cstring>
#include <iomanip>
#include <string.h>

int main(int argc, char *argv[])
{
	std::string layer[] = {"nan", "-inf", "+inf"};
	std::string layer2[] = {"-inff", "+inff" ,"nanf"};
	if (argc == 2)
	{
		Conversion	obj;
		int i = 0;
		while (argv[1][i])
		{
			if (strlen(argv[1]) == 1 && isalpha(argv[1][i])){
				obj.charToOther(argv[1]);
				return 0;
			}
			else if (argv[1][i] == '.' && strrchr(argv[1], 'f')){
				obj.FloatToOthers(argv[1]);
				return 0;
			}
			else if (argv[1][i] == '.' && !strrchr(argv[1], 'f')){
				obj.doubleToOther(argv[1]);
				return 0;
			}
			else if (isdigit(argv[1][i]) && !strchr(argv[1], '.')){
				obj.IntToOthers(argv[1]);
				return 0;
			}
			else if (layer[i].compare(argv[1]) && strlen(argv[1]) > 2){
				obj.NanToOther(argv[1]);
				return 0;
			}
			else if (layer2[i].compare(argv[1]) && strlen(argv[1]) > 2){
				obj.NanfTothers(argv[1]);
				return 0;
			}
			i++;
		}
	}
    return 0;   
}