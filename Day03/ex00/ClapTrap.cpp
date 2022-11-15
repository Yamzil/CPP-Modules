/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:04:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 16:40:38 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstring>
#include <iostream>
#include <string>

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(const ClapTrap& obj) 
{
	std::cout << "Copy Constructor" << std::endl;
	this->name = obj.name;
	this->Energy_points = obj.Energy_points;
	this->Hit_points = obj.Hit_points;
	this->Attack_damage = obj.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj )
{
	std::cout << " Copy Assignment operator" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->Energy_points = obj.Energy_points;
		this->Hit_points = obj.Hit_points;
		this->Attack_damage = obj.Attack_damage;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string name) : name(name) , Hit_points(10) , Energy_points(10) , Attack_damage(0){std::cout << "Constructor called" << std::endl;}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (Hit_points && Energy_points){
		std::cout << this->name << " attacks " << target << " ,causing " << this->Attack_damage << " points of damage" << std::endl;
		Energy_points -= 1;
	}
	else {
		std::cout << "Repair yourself captain !" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount	= Attack_damage;
	std::cout << "Ohh no !!, taking " << amount << " of damage" << std::endl;
	Hit_points -= Hit_points;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hit_points += amount;
	std::cout << "You got " << amount << " of " << "Hits pointes" << std::endl;
	Energy_points -= 1;
}

int	ClapTrap::getAttack() const {return Attack_damage;}