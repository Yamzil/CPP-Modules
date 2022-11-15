/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:13:44 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/05 20:47:29 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include <typeinfo>

Base::~Base()
{}

Base   *Base::generate(void)
{
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;
	srand((int)time(0));
	if ((rand() % 100 + 1) < 50){
		std::cout << "A" << std::endl;
		delete b;
		delete c;
		return a;
	}
	else if ((rand() % 100 + 1 ) > 50 && (rand() % 100 + 1 ) < 100){
		std::cout << "B" << std::endl;
		delete c;
		delete a;
		return b;
	}
	else{
		std::cout << "C" << std::endl;
		delete a;
		delete b;
		return c;
	}
    return NULL;
}

void	Base::identify(Base *p)
{
	Base* a = dynamic_cast<A *>(p);
	if (!a)
		std::cerr << "Cant Dynamic casting it to type A" << std::endl;
	else{
		std::cout << "Identify as class A" << std::endl;
		return ;}
	Base* b = dynamic_cast<B *>(p);
		if (!b)
			std::cerr << "Cant Dynamic casting it to type B" << std::endl;
		else{
		 	std::cout << "Identify as class B" << std::endl;
			return;}
	Base* c = dynamic_cast<C *>(p);
	if (!c)
		std::cerr << "Cant Dynamic casting it to type C" << std::endl;
	else{
		std::cout << "Identify as class C" << std::endl;
		return;}
}

void	Base::identify(Base& p)
{
	try {
		Base &a = dynamic_cast<A &>(p);
		std::cout << &a << "is the actual a" << std::endl;
	} catch (std::bad_cast& e) {
		std::cerr << "bad_cast caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try {
		Base &b = dynamic_cast<B &>(p);
		std::cout << &b << "is the actual b" << std::endl;
	} catch (std::bad_cast& e) {
		std::cerr << "bad_cast caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try {
		Base &c = dynamic_cast<C &>(p);
		std::cout << &c << "is the actual c" << std::endl;
	} catch (std::bad_cast& e) {
		std::cerr << "bad_cast caught: " << e.what() << std::endl;
	}
}
