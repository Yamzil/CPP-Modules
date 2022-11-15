/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:21:32 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:34:43 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	delete j;
	delete i;
    delete meta;
    return 0;
    // {
    // const WrongAnimal* meta = new WrongAnimal();
    // const WrongAnimal* j = new WrongCat();
    // std::cout << j->getType() << std::endl;
    // meta->makeSound();
    // j->makeSound();
    // delete j;
    // delete meta;
    // }
}