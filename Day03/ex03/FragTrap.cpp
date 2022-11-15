/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:16:08 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:32:30 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	ClapTrap::Hit_points = 100;
	ClapTrap::Energy_points = 100;
	ClapTrap::Attack_damage = 30;
	std::cout << "FragTrap's constuctor" << std::endl;
}

FragTrap::FragTrap(){}

FragTrap::~FragTrap() {std::cout << "FragTrap's destructor" << std::endl;}

void	FragTrap::highFives()
{
	std::cout << "we just high fived! high five! *high fives* " << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	this->name = obj.name;
    this->Attack_damage = obj.Attack_damage;
    this->Energy_points = obj.Energy_points;
    this->Hit_points = obj.Hit_points;
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
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