/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:44:33 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 03:47:14 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <sys/time.h>
#include <iomanip>
#include <list>
#include <cctype>

class PmergeMe{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& obj);
		PmergeMe& operator=(const PmergeMe& obj);
};

// vector utils
void	merge(std::vector<int>& vec, std::vector<int>& vec_left, std::vector<int>& vec_right);
void    fillupvector(std::vector<int>& vec, int input, char **argv);
void	mergeInsertionSort(std::vector<int>& vec);
void	insertionsort(std::vector<int>& vec);
void    check_error(std::vector<int>& vec);

// deque utils
void	merge(std::list<int>& deq, std::list<int>& deq_left, std::list<int>& deq_right);
void    fillupdeque(std::list<int>& deq, int input, char **av);
void	mergeInsertionSort(std::list<int>& deq);
void	insertionsort(std::list<int>& deq);