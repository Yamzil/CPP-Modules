/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:41:35 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 17:26:44 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac > 2)
	{
    	std::vector<int> vec;
		fillupvector(vec, ac, av);
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
		std::cout << "Time to process a range of " << vec.size() << " elements with std::deque: " << std::setprecision(3) << duration << " us" << std::endl;
		
		std::cout << std::endl << std::endl;

    	std::deque<int> deq;
		fillupdeque(deq, ac, av);
		std::cout << "Deque - Before sorting: " << std::endl;
		for (std::deque<int>::iterator i = deq.begin(); i != deq.end(); ++i)
			std::cout << *i << " ";
		std::cout << std::endl << std::endl;
		int _start = clock();
		mergeInsertionSort(deq);
		int _end = clock();
		std::cout << "Deque - After sorting: " << std::endl;
		for (std::deque<int>::iterator i = deq.begin(); i != deq.end(); ++i)
			std::cout << *i << " ";
		double _duration = (double)(_end - _start) / CLOCKS_PER_SEC * 1000 * 1000;
		std::cout << std::endl << std::endl;
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: " << std::setprecision(3) << _duration << " us" << std::endl;
	}
}