/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:28:49 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/09 22:21:06 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <array>
#include <vector>

template <typename T, typename Iter>  Iter easyfind(const T &array, int ccurrence);
template <typename T> typename T::iterator easyfind(T &array, int ccurrence);