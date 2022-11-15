/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:39:40 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:24:33 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap{
    protected:
        std::string name;
		int Hit_points;
		int	Energy_points;
		int	Attack_damage;
	public:
		void	attack(const std::string& target);
		void	takeDamage(const std::string& target, unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		GetPoints(void);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap();
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
};