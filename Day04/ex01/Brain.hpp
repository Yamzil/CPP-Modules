/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:08:59 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/15 22:49:42 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain{
	std::string	ideas[100];
  public:
	Brain();
	~Brain();
	Brain(const Brain& obj);
	Brain& operator=(const Brain &obj);
	
};