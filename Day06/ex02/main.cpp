/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:46:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/07 00:08:01 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(){
    Base obj;
	Base *test = new A;
	obj.generate();
	std::cout << "==Test for pointers" << std::endl;
	obj.identify(test);
	std::cout << "===Test for reference" << std::endl;
	obj.identify(*test);
    return 0;
}