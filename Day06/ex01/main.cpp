/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:52:12 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/06 23:40:09 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main()
{
	Data	serial;
	serial.num = 10;
	serial.str = "hello";
	uintptr_t	i = serialize(&serial);
	Data	*ptr = new Data;
	std::cout << serialize(ptr) << std::endl;
	std::cout << deserialize(i) << std::endl;
	std::cout << "num : " << serial.num << std::endl;
	std::cout << "str : " << serial.str << std::endl;
	delete ptr;
	return 0;
}