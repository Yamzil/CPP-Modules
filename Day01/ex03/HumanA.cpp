/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:54:04 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/10 18:49:55 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, class Weapon& Weapon) : Weapon (Weapon) , name(name) {}


void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << Weapon.getType() << std::endl; 
}
