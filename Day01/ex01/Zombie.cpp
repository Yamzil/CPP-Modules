/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:33:58 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/07 22:28:10 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(){ return this->name ;}

Zombie::Zombie()
{
	std::cout << "default constructor" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name <<  ": I am the fire that cleanses the world!"	<< std::endl;
}