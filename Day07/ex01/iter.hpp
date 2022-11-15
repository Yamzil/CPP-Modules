/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:56:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/05 21:33:38 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(42) {return ;}
		int get(void) const {return (this->_n);}
		~Awesome(){};
};
std::ostream& operator<<(std::ostream& o, Awesome const & rhs) {o << rhs.get(); return (o);}
template <typename T>
void print(T const &x) {std::cout << x << std::endl; return ;}

template<typename iter>
void	iter_fun(iter arr[], int size, void (*print)(iter));
template<typename iter>
void	iter_fun(const iter arr[], int size, void (*print)(iter));
template<typename iter>
void	print(iter x);