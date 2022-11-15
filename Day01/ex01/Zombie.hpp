/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:31:09 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/07 21:44:40 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        void    setName(std::string name);
        std::string getName(); 
        void    announce();     
};

Zombie  *zombieHorde(int N, std::string name);
