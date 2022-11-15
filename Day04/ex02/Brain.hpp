/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:24:45 by yamzil            #+#    #+#             */
/*   Updated: 2022/10/28 17:18:02 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain{
	private:
		std::string	ideas[100];
  	public:
		Brain();
		~Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain &obj);
	
};