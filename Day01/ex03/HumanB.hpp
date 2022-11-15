/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:26:22 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/08 12:23:41 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "weapon.hpp"
#include <string>

class HumanB{
	private:
		Weapon	*weapon;
		std::string name;
	public:
		void	attack();	
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
};