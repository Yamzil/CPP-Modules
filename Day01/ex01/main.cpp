/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:56:48 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/10 14:46:16 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    if (N < 0) return -1;
    Zombie  *ptr = zombieHorde(N, "Brand");
    while (N--){
        ptr[N].getName();
        ptr[N].announce();
    }
	delete [] ptr;
}