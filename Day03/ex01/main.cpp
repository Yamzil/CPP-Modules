/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:07:31 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:22:11 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	object("SCP-173");
	ScavTrap	other_object("SCP-093");
	// ClapTrap	obj("yahya");
	// ClapTrap	obj_tst("Amzil");

	// obj.attack("Amzil");
	other_object.GetInfosBeforAttack("SCP-093");
	std::cout << std::endl << std::endl;
	object.attack("SCP-093");
	if (object.GetPoints() != 0)
		other_object.takeDamage("SCP-093", 50);
	std::cout << std::endl << std::endl;
	other_object.GetInfosAfterAttack("SCP-093");
	std::cout << std::endl << std::endl;
	other_object.beRepaired(50);
	other_object.guardGate();
	other_object.GetInfosAfterAttack("SCP-093");
}