/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:18:46 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/28 16:24:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
    public:
		Cat();
		~Cat();
		void	makeSound() const ;
		Cat(const Cat& obj);
		Cat& operator=(Cat& obj);
};