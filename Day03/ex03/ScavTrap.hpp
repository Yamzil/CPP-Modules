/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:24:50 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:36:25 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap();
		ScavTrap(const ScavTrap& obj);
		ScavTrap& operator=(const ScavTrap& obj);
		void	guardGate();
		void	attack(const std::string& target);
		void	GetInfosBeforAttack(const std::string &targer);
		void	GetInfosAfterAttack(const std::string &targer);	
};

#endif