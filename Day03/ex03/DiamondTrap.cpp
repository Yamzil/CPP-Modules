/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:15:41 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:40:06 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    DiamondTrap::Hit_points = FragTrap::Hit_points;
    DiamondTrap::Energy_points = ScavTrap::Energy_points;
    DiamondTrap::Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap's constructor" << std::endl;
}

DiamondTrap::DiamondTrap() : ScavTrap() , FragTrap(){}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap's distructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj) , ScavTrap(obj) , FragTrap(obj)
{
    this->name = obj.name;
    this->Attack_damage = obj.Attack_damage;
    this->Energy_points = obj.Energy_points;
    this->Hit_points = obj.Hit_points;
}

void	DiamondTrap::whoAmI()
{
    std::cout << "I am :" << this->name << " "<< DiamondTrap::ClapTrap::GetName() << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void	DiamondTrap::setName(std::string _name)
{
	name = _name;
}

std::string	DiamondTrap::getName()
{
	return	this->name;
}