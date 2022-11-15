/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:13:48 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/04 18:56:13 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <exception>
#include <ostream>
#include <iostream>

class Base{
    public:
        virtual ~Base();
        Base* generate(void);
        void identify(Base* p);
        void identify(Base& p);
};
