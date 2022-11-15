/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:16:57 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/25 17:32:43 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		void	highFives();
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		FragTrap& operator=(const FragTrap& obj);
		~FragTrap();
		FragTrap();
};

#endif