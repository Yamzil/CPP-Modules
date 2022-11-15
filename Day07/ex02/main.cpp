/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:09:33 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/08 19:17:52 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>
#include <stdexcept>

int main(){
	Array<int> ar1;
    Array<int> ar0(10);
	for (int i = 0; i < 10; i++)
		ar0[i] = i;
	std::cout << "print the elements of the array" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << ar0[i] << std::endl;
	try {
		std::cout << "try access an elemetent out of the range : ";
		std::cout << ar0[20] << std::endl;
	} catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ar0[-2] = 10;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}