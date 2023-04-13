/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:41:35 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 03:45:28 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac > 2)
	{
    	std::vector<int> vec;
		fillupvector(vec, ac, av);
		// check_error(vec);
		std::cout << "Vector - Before sorting: " << std::endl;
		for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
			std::cout << *i << " ";
		std::cout << std::endl << std::endl;
		int start = clock();
		mergeInsertionSort(vec);
		int end = clock();
		std::cout << "Vector - After sorting: " << std::endl;
		for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
			std::cout << *i << " ";
		double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000 * 1000;
		std::cout << std::endl << std::endl;
		std::cout << "Time to process a range of X elements with std::vector: " << std::setprecision(5) << duration << " us" << std::endl;
		
		std::cout << std::endl << std::endl;

    	std::list<int> lst;
		fillupdeque(lst, ac, av);
		// check_error(lst);
		std::cout << "List - Before sorting: " << std::endl;
		for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
			std::cout << *i << " ";
		std::cout << std::endl << std::endl;
		int _start = clock();
		mergeInsertionSort(lst);
		int _end = clock();
		std::cout << "After sorting: " << std::endl;
		for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
			std::cout << *i << " ";
		double _duration = (double)(_end - _start) / CLOCKS_PER_SEC * 1000 * 1000;
		std::cout << std::endl << std::endl;
		std::cout << "Time to process a range of X elements with std::list: " << std::setprecision(5) << _duration << " us" << std::endl;
	}
}