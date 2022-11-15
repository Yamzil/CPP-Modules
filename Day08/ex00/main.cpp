/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:38:16 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/09 22:21:35 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <cassert>
#include <iostream>
#include <vector>

template <typename T>
typename T::const_iterator easyfind(const T &array, int ccurrence) {
  return std::find(begin(array), end(array), ccurrence);
}

template <typename T>
typename T::iterator easyfind(T &array, int ccurrence) {
  return std::find(begin(array), end(array), ccurrence);
}

int main() {
    std::array<int, 12> a1 = {1, 1, 1, 5, 25, 5, 26, 5, 96, 5, 25, 5};
	assert(easyfind(a1, 1) != a1.end()); std::cout << "pass\n";
	assert(easyfind(a1, 25) != a1.end()); std::cout << "pass\n";
	assert(easyfind(a1, 100) == a1.end()); std::cout << "pass\n";
	assert(easyfind(a1, 200) == a1.end()); std::cout << "pass\n";
  	return 0;
}