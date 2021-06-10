/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 06:45:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 17:50:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_WHATEVER_HPP_
#define EX00_WHATEVER_HPP_

#include <algorithm>
#include <utility>

template<typename T>
void    swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T const& min(T const& a, T const& b) {
    return (a < b ? a : b);
}

template<typename T>
T const& max(T const& a, T const& b) {
    return (a > b ? a : b);
}

#endif  // EX00_WHATEVER_HPP_
