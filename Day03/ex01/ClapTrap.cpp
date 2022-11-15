/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:59:05 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:43:57 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstring>

ClapTrap::ClapTrap(std::string name) : Hit_points(100) , Energy_points(50) , Attack_damage(20){
	this->name = name;
	std::cout << "ClapTrap's constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap's destructor" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hit_points != 0 && this->Energy_points != 0){
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
			<< this->Attack_damage << " points of damage!" << std::endl;
		Energy_points -= 1;
	}
}

void	ClapTrap::takeDamage(const std::string& target, unsigned int amount)
{
   	std::cout << target << " loses " << amount << " Hit Points" << std::endl;
	Hit_points -= Hit_points;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_points) {
		Energy_points -= 1;
		Hit_points += amount;
		std::cout << "You got " << amount << " of " << "Hit points" << std::endl;
	}
}

int	ClapTrap::GetPoints(void) {return Energy_points;}

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(const ClapTrap& obj){
	this->name = obj.name;
	this->Attack_damage = obj.Attack_damage;
	this->Energy_points =  obj.Energy_points;
	this->Hit_points = obj.Hit_points;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->Attack_damage = obj.Attack_damage;
		this->Energy_points =  obj.Energy_points;
		this->Hit_points = obj.Hit_points;
	}
	return *this;	
}