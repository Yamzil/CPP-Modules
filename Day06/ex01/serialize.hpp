/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:36:30 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/04 16:13:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdint.h>
#include <ostream>
#include <iostream>
#include <sys/_types/_uintptr_t.h>

typedef struct s_strc{
	std::string str;
	int	num;
}Data;

Data*		deserialize(uintptr_t raw);
uintptr_t	serialize(Data *ptr);