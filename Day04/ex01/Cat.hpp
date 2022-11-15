/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:06:52 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:27:11 by yamzil           ###   ########.fr       */
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
		virtual ~Cat();
		Cat(const Cat& obj);
        void	setType(std::string type);
		Cat&	operator=(const Cat &obj);
		std::string	getType() const ;
		void	makeSound() const ;
};