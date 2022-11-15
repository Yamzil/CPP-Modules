/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:53:07 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/08 12:25:42 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "weapon.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
	if (weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}