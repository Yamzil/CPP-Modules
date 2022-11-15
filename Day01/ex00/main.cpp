/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:17:52 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/10 14:24:13 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

	randomChump("Creeper");
	
	std::cout << std::endl << std::endl;

	Zombie	*object = newZombie("Climber");
	if (!object){
		std::cout << "bad allocation" << std::endl;
		return -1;
	}
	object->announce();
	delete object;
}