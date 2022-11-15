/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:13:45 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/29 19:35:31 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    // Cat Basic;
    // {
    //     Cat tmp = Basic;    
    // }
    const Animal* j = new Dog(); 
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    Animal  *Animaux[4];
    Animaux[0] = new Cat;
    Animaux[1] = new Cat;
    Animaux[2] = new Dog;
    Animaux[3] = new Dog;
    
    delete Animaux[0];
    delete Animaux[1];
    delete Animaux[2];
    delete Animaux[3];
    return 0;
}