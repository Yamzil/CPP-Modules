/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:36:18 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/04 18:58:49 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t	serialize(Data *ptr){
	uintptr_t   p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}

Data*	deserialize(uintptr_t raw){
    Data	*ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}