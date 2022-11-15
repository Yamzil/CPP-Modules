/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:44:24 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/09 21:49:00 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <stdexcept>
#include <array>


int main(){
	Span<int> sp(5);
	sp = Span<int>(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}