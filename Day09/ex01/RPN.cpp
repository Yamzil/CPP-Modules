/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:17:58 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 16:18:31 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN& obj){
    *this = obj;
}

RPN& RPN::operator=(const RPN& obj){
    if (this != &obj) *this = obj;
    return *this;
}
