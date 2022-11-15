/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:45:43 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/09 22:23:23 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <cstddef>
#include <stdexcept>
#include <iostream>
#include <iterator>
#include <iostream>
#include <vector>

template<typename T>
class Span{
	private:
		unsigned int N;
		std::vector<int>sp;
	public:
		Span();
		~Span();
		Span(unsigned int i);
		Span&	operator=(const Span &obj);
		Span(const Span& obj);
		void	addNumber(unsigned int i);
		int		shortestSpan();
		int		longestSpan();
		void	multipleAdd(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

template<typename T>
Span<T>::Span(const Span& obj) {*this = obj; }

template<typename T>
Span<T>& Span<T>::operator=(const Span &obj)
{
	if (this != &obj){
		sp = obj.sp;
		N = obj.N;
	}
	return *this;
}

template<typename T>
Span<T>::Span(): N(0){}

template<typename T>
Span<T>::~Span(){	
}

template<typename T>
Span<T>::Span(unsigned int N){
	this->N = N;
}

template<typename T>
void	Span<T>::addNumber(unsigned int i)
{
	try {
		if (this->N - sp.size() > 0){
			sp.push_back(i);
		}
		else
			throw std::invalid_argument("full vector");
	}
	catch (std::invalid_argument const &e ){
		std::cout << e.what() << std::endl;
	}
}

template<typename T>
int	Span<T>::shortestSpan(){
	int k = 0;
	int smallest = 2147483647;
	if (sp.size() < 2)
		throw std::out_of_range("Size error");
	for (unsigned int i = 0; i < this->N - 1 ; i++){
		k = sp[i + 1] - sp[i];
		if (k < smallest)
			smallest = k;
		if (smallest < 0){
			smallest *= -1;
		}
	}
	return smallest;
}

template<typename T>
int	Span<T>::longestSpan(){
	int k = 0;
	int biggest = 0;
	if (sp.size() < 2)
		throw std::out_of_range("Size error");
	for (unsigned int i = 0; i < this->N - 1 ; i++){
		k = sp[i + 1] - sp[i];
		if (k < 0){
			k *= -1;
		}
		if (k > biggest)
			biggest = k;
	}
	return (biggest);
}

template<typename T>
void Span<T>::multipleAdd(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) > N)
		throw std::length_error("more than enough of elements\n");
	sp.insert(sp.end(), start, end);
}