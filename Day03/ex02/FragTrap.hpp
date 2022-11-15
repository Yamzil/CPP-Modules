/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:36:09 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:26:33 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap{
	public:
		void	highFives();
		FragTrap();
		FragTrap&	operator=(const FragTrap& obj);
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		~FragTrap();
};