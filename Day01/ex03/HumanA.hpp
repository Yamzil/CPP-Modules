/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:54:01 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/10 22:46:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "weapon.hpp"

class	HumanA{
	private:
		Weapon&	Weapon;
		std::string	name;
	public:
		HumanA(std::string name, class Weapon& Weapon);
		HumanA(std::string name);
		void	attack();
};