/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:56:55 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 20:39:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	object_attacker("SCP-173");
	ClapTrap	object_defender("SCP-096");
	
	object_attacker.attack("SCP-096");
	object_defender.takeDamage(10);	
	object_defender.beRepaired(10);
}