/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:11:58 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/10 08:25:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isoperand(char x) {
    return std::isdigit(x) ? true : false;
}

bool isoperators(char x)
{
	if (x == '+' || x == '-' || x == '*' || x == '/')
		return (true);
	return (false);
}

int operators(int right, int left, char x)
{
	int res;
	if (x == '+')
		return (res = right + left);
	else if (x == '-')
		return (res = right - left);
	else if (x == '*')
		return (res = right * left);
	else if (x == '/')
	{
		if (left == 0)
		{
			std::cerr << "Division by 0" << std::endl;
			exit (0);
		}
		return (res = right / left);
	}
	return (0);
}

int	rpn(std::stack<int>& stk, std::string& input)
{
	int	num1, num2, res;
	for (std::string::iterator it = input.begin(); it != input.end(); it++)
	{
		if (isoperand(*it))
			stk.push(*it - '0');
		else if (isoperators(*it))
		{
			if (stk.size() < 2) {
				std::cerr << "Error" << std::endl;
				exit(0);
			}
			num2 = stk.top();
			stk.pop();
			num1 = stk.top();
			stk.pop();
			res = operators(num1, num2, *it);
			stk.push(res);
		}
	}
	if (stk.size() != 1) {
		std::cerr << "Error" << std::endl;
		exit(0);
	}
	return (stk.top());
}

bool	validoperands(std::string& input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (std::isdigit(input[i]) || input[i] == '-' || input[i] == '+' || input[i] == '*' || input[i] == '/' || input[i] == ' ')
			continue ;
		else
		{
			std::cout << "Error" << std::endl;
			return (false);
		}
	}
	return (true);
}



int main(int ac, char **av)
{
	int res;
    if (ac == 2)
    {
        std::stack<int> stk;
		std::string	input = av[1];
		if (validoperands(input))
		{
			res = rpn(stk, input);
			std::cout << res << std::endl;
		}
    }
}