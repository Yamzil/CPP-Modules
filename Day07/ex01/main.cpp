/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:56:15 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/05 21:33:08 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename iter>
void	iter_fun(iter arr[], int size, void (*print)(iter))
{
	for (int i = 0; i < size; i++){
		print(arr[i]);
	}
}

template<typename iter>
void	iter_fun(const iter arr[], int size, void (*print)(iter))
{
	for (int i = 0; i < size; i++){
		print(arr[i]);
	}
}

template<typename iter>
void	print(iter x){
	std::cout << x << std::endl;
}

int main(){
	int tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter_fun(tab, 5, print);
	iter_fun(tab2, 5, print);
}