/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:34:22 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/10 20:53:27 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	obj;
	std::string array[4]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
    if (argc == 2)
    {
		for (; i < 4; i++){
			if (array[i] == argv[1])
				break ;
		}
		switch (i) {
			case 0:
				obj.complain("DEBUG");
			case 1:
				obj.complain("INFO");
			case 2:
				obj.complain("WARNING");
			case 3:
				obj.complain("ERROR");
			break;
			default:
				std::cout << "Emm I guess nothing wrong here" << std::endl;
		}
    }
}
