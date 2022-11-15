/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:24:08 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:31:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
	private:
		Brain*	brain;
    public:
		Cat();
		~Cat();
		Cat(const Cat& obj);
		Cat&	operator=(const Cat& obj);
        void	setType(std::string type);
		std::string	getType() const ;
		void	makeSound() const ;
};