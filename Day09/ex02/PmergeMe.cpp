/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 03:47:47 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 16:20:41 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe(){
}

PmergeMe::PmergeMe(){
}


PmergeMe::PmergeMe(const PmergeMe& obj){
	*this = obj;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &obj){
	if (this != &obj) *this = obj;
	return *this;
}
