/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:06:39 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/09 21:54:51 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef  typename std::stack<T>::container_type::iterator iterator;
		MutantStack(){}
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
		~MutantStack(){};
		MutantStack(const MutantStack& obj){
			*this = obj;
		}
		MutantStack&	operator=(const MutantStack& obj){
			if (this != &obj)
				*this = obj;
			return *this;
		}
};