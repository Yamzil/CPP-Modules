/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:02:21 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:44:02 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <cstring>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->name = name;
	ClapTrap::Hit_points = 100;
	ClapTrap::Energy_points = 50;
	ClapTrap::Attack_damage = 20;
	 std::cout << "ScavTrap's constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap's destructor" << std::endl;
}

std::string	ScavTrap::GetName() const
{
	return this->name;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << GetName() << " is now in gate mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (Hit_points != 0 && Energy_points != 0)
		std::cout << "ScavTrap " << ScavTrap::GetName() << " attacks " << target << ", causing "
		<< this->Attack_damage << " points of damage!" << std::endl;
	Energy_points -= 1;
}

void	ScavTrap::GetInfosBeforAttack(const std::string& target)
{
	std::cout << "----" << target <<  "----" << std::endl;
	std::cout << "Attack damage: " << Attack_damage << std::endl;
	std::cout << "Hit points: " << Hit_points << std::endl;
	std::cout << "Energy Points: " << Energy_points << std::endl;
}

void	ScavTrap::GetInfosAfterAttack(const std::string& target)
{
	std::cout << "----" << target <<  "----" << std::endl;
	std::cout << "Attack damage: " << Attack_damage << std::endl;
	std::cout << "Hit points: " << Hit_points << std::endl;
	std::cout << "Energy Points: " << Energy_points << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	this->name = obj.name;
	this->Attack_damage = obj.Attack_damage;
	this->Energy_points = obj.Energy_points;
	this->Hit_points = obj.Hit_points;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->Attack_damage = obj.Attack_damage;
		this->Energy_points = obj.Energy_points;
		this->Hit_points = obj.Hit_points;
	}
	return *this;
}