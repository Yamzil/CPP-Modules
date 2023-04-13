/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:26:58 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 03:44:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	check_error(std::list<int>& lst)
{
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it){
		if (!std::isdigit(*it)){
			std::cerr << "Error" << std::endl;
			exit (0);
		}
	}
}

void    fillupdeque(std::list<int>& deq, int input, char **av)
{
    for (int i = 1; i < input; i++){
		int value = std::atoi(av[i]);
		deq.push_back(value);
	}
}

void insertionsort(std::list<int>& deq)
{
    std::list<int>::iterator j;
    for (std::list<int>::iterator i = deq.begin(); i != deq.end(); ++i) {
        j = i;
        while (j != deq.begin() && *(--j) > *i) {
            std::swap(*i, *j);
        }
    }
}


void merge(std::list<int>& deq, std::list<int>& deq_left, std::list<int>& deq_right)
{
    std::list<int>::iterator left_it = deq_left.begin();
    std::list<int>::iterator right_it = deq_right.begin();
    std::list<int>::iterator deq_it = deq.begin();

    while (left_it != deq_left.end() && right_it != deq_right.end())
    {
        if (*left_it <= *right_it)
            *deq_it++ = *left_it++;
        else
            *deq_it++ = *right_it++;
    }

    while (left_it != deq_left.end())
        *deq_it++ = *left_it++;

    while (right_it != deq_right.end())
        *deq_it++ = *right_it++;
}


void mergeInsertionSort(std::list<int>& deq)
{
    if (deq.size() < 5) {    
        insertionsort(deq);
        return ;
    }
    else{
        size_t mid = deq.size() / 2;
        std::list<int> left_deq;
        std::list<int> right_deq;
        std::list<int>::iterator it = deq.begin();
        std::advance(it, mid);
        std::copy(deq.begin(), it, std::back_inserter(left_deq));
        std::copy(it, deq.end(), std::back_inserter(right_deq));
        mergeInsertionSort(left_deq);
        mergeInsertionSort(right_deq);
        merge(deq, left_deq, right_deq);
    }
}
