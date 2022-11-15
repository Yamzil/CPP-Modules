/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:06 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/10 14:25:41 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie{
  private:
    std::string name;
public:
	void	announce(void);
	Zombie(std::string name);
	Zombie();
	~Zombie();
	std::string	getName(void);
	void	setName(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);