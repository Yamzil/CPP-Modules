/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:10:24 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/28 16:24:17 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{
    public:
		Dog();
		~Dog();
		void	makeSound() const;
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
};