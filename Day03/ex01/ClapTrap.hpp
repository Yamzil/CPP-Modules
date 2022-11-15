/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:58:51 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 16:06:33 by yamzil           ###   ########.fr       */
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
		ClapTrap(std::string name, int hp, int ep, int ad);
		ClapTrap(std::string name);
		ClapTrap();
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		virtual	~ClapTrap();
};