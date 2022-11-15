/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:35:48 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:45:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap tst("yahya", 50, 50, 55);
    DiamondTrap obj("SCP-001");
    DiamondTrap other_obj("SCP-002");

    obj.whoAmI();
    other_obj.whoAmI();
    obj.attack("SCP-009");
}