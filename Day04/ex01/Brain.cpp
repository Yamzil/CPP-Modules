/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:08:54 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/28 17:12:34 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstring>

Brain::Brain(){
    std::cout << "Brain's constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain's destructor" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(const Brain &obj)
{
	if (this != &obj){
		for (int i = 0; i < 100 ; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return *this;
}