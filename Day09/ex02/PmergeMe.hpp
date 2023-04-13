/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:44:33 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 17:23:03 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <sys/time.h>
#include <iomanip>
#include <deque>
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
void		check_error(std::string& str);

// deque utils
void	merge(std::deque<int>& deq, std::deque<int>& deq_left, std::deque<int>& deq_right);
void    fillupdeque(std::deque<int>& deq, int input, char **av);
void	insertionsort(std::deque<int>& deq);
void	mergeInsertionSort(std::deque<int>& deq);