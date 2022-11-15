/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:09:22 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/08 22:15:49 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <utility>

template<typename T>class Array{
	private:
		T *array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &obj);
		Array<T> operator=(Array<T> const &obj);
		unsigned int	size();
		T&	operator[](unsigned int i);
};

template<typename T>
Array<T>::Array(){
	std::cout << "default constructor" << std::endl;
	this->array = new T[0];
	this->_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n){
	this->array = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array<T> const &obj){
	std::cout << "Copy constructor" << std::endl;
	this->_size = obj._size;
	this->array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		array[i] = obj.array[i];
}

template<typename T>
Array<T>	Array<T>::operator=(const Array<T> &obj){
	std::cout << "Copy Assignment operator" << std::endl;
	if (this->array)
		delete [] this->array;
	this->_size = obj._size;
	this->array = new T[obj._size];
	for (unsigned int i = 0; i < this->_size; i++)
		array[i] = obj.array[i];
	return *this;
}

template<typename T>
unsigned int	Array<T>::size(){
	return this->_size;
}

template<typename T>
T&	Array<T>::operator[](unsigned int i){
	if (i > _size)
		throw std::out_of_range("Out of range");
	return this->array[i];
}