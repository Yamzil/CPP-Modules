/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:41:35 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/12 18:19:02 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
	size_t mid = vec.size() / 2;
	std::vector<int> left_vec;
	std::vector<int> right_vec;
	left_vec.reserve(mid);
	right_vec.reserve(vec.size() - mid);
	std::copy(std::begin(vec), std::begin(vec) + mid, std::back_inserter(left_vec));
    std::copy(std::begin(vec) + mid, std::end(vec), std::back_inserter(right_vec));
	mergeInsertionSort(left_vec);
	mergeInsertionSort(right_vec);
	merge(vec, left_vec, right_vec);
}


int main(int ac, char **av)
{
	timeval tp;
	if (ac > 2)
	{
    	std::vector<int> vec;
		fillupvector(vec, ac, av);
		std::cout << "Before sorting: " << std::endl;
		for (size_t i = 0; i < vec.size(); i++)
			std::cout << " " << vec[i];
		std::cout << std::endl << std::endl;
		int start = gettimeofday(&tp, NULL);
		mergeInsertionSort(vec);
		int end = gettimeofday(&tp, NULL);
		std::cout << "After sorting: " << std::endl;
		for (size_t i = 0; i < vec.size(); i++)
			std::cout << " " << vec[i];
		double duration = (double)(end - start) / CLOCKS_PER_SEC;
		std::cout << std::endl << std::endl;
		std::cout << "Time taken by algorithm: " << duration << " seconds" << std::endl;
	}
}