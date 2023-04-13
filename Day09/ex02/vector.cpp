/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:25:09 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 03:38:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	check_error(std::vector<int>& vec)
{
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
		if (!std::isdigit(*it)){
			std::cerr << "Error" << std::endl;
			exit (0);
		}
	}
}

void    fillupvector(std::vector<int>& vec, int input, char **argv)
{
	for (int i = 1; i < input; i++){
		int value = std::atoi(argv[i]);
		vec.push_back(value);
	}
}

void	insertionsort(std::vector<int>& vec)
{
	size_t j;
	for (size_t i = 1; i < vec.size(); i++){
		j = i;
		while (j > 0 && vec[j - 1] > vec[j]){
			std::swap(vec[j], vec[j - 1]);
			j--;
		}
	}
}

void	merge(std::vector<int>& vec, std::vector<int>& vec_left, std::vector<int>& vec_right)
{
	size_t i = 0, j = 0, k = 0;
	while (i < vec_left.size() && j < vec_right.size())
	{
		if (vec_left[i] <= vec_right[j])
			vec[k++] = vec_left[i++];
		else
			vec[k++] = vec_right[j++];
	}
	while (i < vec_left.size())
		vec[k++] = vec_left[i++];
	while (j < vec_right.size())
		vec[k++] = vec_right[j++];
	
}

void	mergeInsertionSort(std::vector<int>& vec)
{
	if (vec.size() < 5) {	
		insertionsort(vec);
		return ;
	}
	else{
		size_t mid = vec.size() / 2;
		std::vector<int> left_vec;
		std::vector<int> right_vec;
		std::copy(std::begin(vec), std::begin(vec) + mid, std::back_inserter(left_vec));
		std::copy(std::begin(vec) + mid, std::end(vec), std::back_inserter(right_vec));
		mergeInsertionSort(left_vec);
		mergeInsertionSort(right_vec);
		merge(vec, left_vec, right_vec);
	}
}
