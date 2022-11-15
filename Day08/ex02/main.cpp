/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:28:50 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/09 22:20:17 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <list>

int main()
{
	{
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << "list's front is " << mstack.front() << std::endl;
		mstack.pop_back();
		std::cout <<"list's size is " << mstack.size() << std::endl;
		mstack.push_front(3);
		mstack.push_front(5);
		mstack.push_front(737);
		mstack.push_front(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite){
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
		return 0;
	}
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "stack's top is " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "stack's size is " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite){
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		return 0;
	}
}