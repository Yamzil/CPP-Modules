/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:07:22 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:27:22 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{
	private:
		Brain*	brain;
    public:
		Dog();
		virtual ~Dog();
        void	setType(std::string type);
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		std::string	getType();
		void	makeSound() const;
};