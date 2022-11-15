/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:15:23 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:22:34 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal{
    public:
		WrongCat();
		~WrongCat();
        void	setType(std::string type);
		std::string	getType() const ;
		void	makeSound() const ;
		WrongCat(const WrongCat& obj);
		WrongCat& operator=(WrongCat& obj);
};
