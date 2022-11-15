/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:02:41 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:31:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), Hit_points(100), Energy_points(100), Attack_damage(30) {std::cout << "ClapTrap's constructor" << std::endl;}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap's destructor" << std::endl;
}

ClapTrap::ClapTrap(){}

void	ClapTrap::attack(const std::string& target)
{
	if (Hit_points != 0 && Energy_points != 0){
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
			<< Attack_damage << " points of damage!" << std::endl;
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

void	ClapTrap::setName(std::string name){ this->name = name;}
std::string	ClapTrap::GetName() const { return this->name;}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	this->name = obj.name;
    this->Attack_damage = obj.Attack_damage;
    this->Energy_points = obj.Energy_points;
    this->Hit_points = obj.Hit_points;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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