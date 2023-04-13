/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:26:58 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 17:21:43 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    fillupdeque(std::deque<int>& deq, int input, char **av)
{
    for (int i = 1; i < input; i++){
        std::string arg = av[i];
		check_error(arg);
		int value = std::atoi(av[i]);
		deq.push_back(value);
	}
}

void insertionsort(std::deque<int>& deq)
{
    size_t j;
	for (size_t i = 1; i < deq.size(); i++){
		j = i;
		while (j > 0 && deq[j - 1] > deq[j]){
			std::swap(deq[j], deq[j - 1]);
			j--;
		}
	}
}


void merge(std::deque<int>& deq, std::deque<int>& deq_left, std::deque<int>& deq_right)
{
    size_t i = 0, j = 0, k = 0;
	while (i < deq_left.size() && j < deq_right.size())
	{
		if (deq_left[i] <= deq_right[j])
			deq[k++] = deq_left[i++];
		else
			deq[k++] = deq_right[j++];
	}
	while (i < deq_left.size())
		deq[k++] = deq_left[i++];
	while (j < deq_right.size())
		deq[k++] = deq_right[j++];
}


void mergeInsertionSort(std::deque<int>& deq)
{
    if (deq.size() < 5) {    
        insertionsort(deq);
        return ;
    }
    else{
        size_t mid = deq.size() / 2;
        std::deque<int> left_deq;
        std::deque<int> right_deq;
        std::copy(std::begin(deq), std::begin(deq) + mid, std::back_inserter(left_deq));
		std::copy(std::begin(deq) + mid, std::end(deq), std::back_inserter(right_deq));
        mergeInsertionSort(left_deq);
        mergeInsertionSort(right_deq);
        merge(deq, left_deq, right_deq);
    }
}
