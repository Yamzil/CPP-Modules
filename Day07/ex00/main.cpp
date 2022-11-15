/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:31:06 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/08 22:08:51 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <class SwapValue>
void	swap_fun(SwapValue& a, SwapValue& b)
{
	SwapValue x;
    x = a;
    a = b;
    b = x;
}

template<class MinValue>
MinValue	min_fun(MinValue a, MinValue b)
{
	if (a == b)
		return b;
	return a > b ? b : a;
}

template<class MaxValue>
MaxValue	max_fun(MaxValue a, MaxValue b)
{
	if (a == b)
		return b;
	return a > b ? a : b;	
}

// int main( void ) {
// int a = 2;
// int b = 3;
// swap_fun( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << min_fun( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << max_fun( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// swap_fun(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << min_fun( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << max_fun( c, d ) << std::endl;
// return 0;
// }

int main(){
	Awesome a(2), b(4);
	std::cout << a << " " << std::endl;
	std::cout << b << " " << std::endl;
	std::cout << max_fun(a ,b) << std::endl;
	std::cout << min_fun(a, b) << std::endl;
	return 0;
}