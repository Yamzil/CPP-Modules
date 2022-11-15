/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:00:44 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:14:30 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap{
    public:
		ScavTrap(std::string name);
        ~ScavTrap();
		ScavTrap(const ScavTrap& obj);
		ScavTrap& operator=(const ScavTrap& obj);
		void	guardGate();
		void	attack(const std::string& target);
		void	GetInfosBeforAttack(const std::string &targer);
		void	GetInfosAfterAttack(const std::string &targer);
		std::string	GetName(void) const;
};

