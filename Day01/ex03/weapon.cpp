/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:34:47 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/08 11:44:50 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include <string>

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType() {
    std::string& ref = type;
    return ref ;
}

Weapon::Weapon(std::string type)
{   
    this->type = type;
}