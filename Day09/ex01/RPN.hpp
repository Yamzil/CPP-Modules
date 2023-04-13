/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 10:00:41 by yamzil            #+#    #+#             */
/*   Updated: 2023/04/13 16:32:56 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>

class RPN {
    public:
    RPN();
    ~RPN();
    RPN(const RPN& obj);
RPN&    operator=(const RPN& obj);
};