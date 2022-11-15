/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:36:04 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:29:32 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	ClapTrap::Hit_points = 100;
	ClapTrap::Energy_points = 100;
	ClapTrap::Attack_damage = 30;
	std::cout << "FragTrap's constuctor" << std::endl;
}

FragTrap::FragTrap() : ClapTrap(){}

FragTrap::~FragTrap() {std::cout << "FragTrap's destructor" << std::endl;}

void	FragTrap::highFives()
{
	std::cout << "we just high fived! high five! *high fives* " << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	this->Attack_damage = obj.Attack_damage;
	this->Energy_points = obj.Energy_points;
	this->Hit_points = obj.Hit_points;
	this->name = obj.name;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
	{
		this->Attack_damage = obj.Attack_damage;
		this->Energy_points = obj.Energy_points;
		this->Hit_points = obj.Hit_points;
		this->name = obj.name;
	}
	return *this;
}