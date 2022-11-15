/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:36:04 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/06 21:33:56 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>

template <typename  SwapValue>
void	swap_fun(SwapValue& a, SwapValue& b);
template<typename MinValue>
MinValue	min_fun(MinValue a, MinValue b);
template<typename MaxValue>
MaxValue	max_fun(MaxValue a, MaxValue b);

class Awesome{
	public:
		Awesome(void) : _n(0){}  
		Awesome(int n) : _n(n){}
		Awesome& operator=(Awesome& a){ _n = a._n; return *this;}
		bool	operator==(Awesome& rhs) const {return (this->_n == rhs._n);}
		bool	operator!=(Awesome& rhs) const {return (this->_n != rhs._n);}
		bool	operator>(Awesome& rhs) const {return (this->_n > rhs._n);}
		bool	operator<(Awesome& rhs) const {return (this->_n < rhs._n);}
		bool	operator>=(Awesome& rhs) const {return (this->_n >= rhs._n);}
		bool	operator<=(Awesome& rhs) const {return (this->_n <= rhs._n);}
		int	get_n() const {return _n;}
	private:
		int _n;
};

std::ostream& operator<<(std::ostream& o, const Awesome &a) {o << a.get_n(); return o;}