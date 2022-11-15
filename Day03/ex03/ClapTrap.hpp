/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:03:01 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:31:11 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
		void	setName(std::string name);
		std::string	GetName(void) const;
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		~ClapTrap();
		ClapTrap();
		   
};

#endif