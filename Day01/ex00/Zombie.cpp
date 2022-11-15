/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:20:30 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/07 17:13:09 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) 
{
	this->name =  name;
}

Zombie::Zombie() {}

Zombie::~Zombie()
{
    std::cout << this->name << "'s destructor" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(){ return this->name;}

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
