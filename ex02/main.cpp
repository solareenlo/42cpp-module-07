/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:32:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 15:40:45 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
void    print_array(Array<T>& arr) {
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main() {
    Array<int> a(3);
    for (int i = 0; i < static_cast<int>(a.size()); i++) {
        a[i] = i;
    }
    std::cout << "Array size: " << a.size() << std::endl;
    print_array(a);

    Array<int> b;
    b = a;
    print_array(b);
    return 0;
}
