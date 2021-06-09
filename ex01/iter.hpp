/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 07:42:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 08:15:57 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_ITER_HPP_
#define EX01_ITER_HPP_

#include <iostream>
#include <cstddef>

template<class T>
void    iter(T* arr, size_t len, void (*f)(T const& x)) {
    if (!arr)
        return;
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}

#endif  // EX01_ITER_HPP_
