/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:32:54 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 16:34:21 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
void    print_array(Array<T> const& arr) {
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main() {
    {
        Array<int> a(3);
        for (int i = 0; i < static_cast<int>(a.size()); i++) {
            a[i] = i;
        }
        std::cout << "Array size: " << a.size() << std::endl;
        print_array(a);
        std::cout << std::endl;

        Array<int> b;
        b = a;
        print_array(b);
        std::cout << std::endl;

        Array<int> c(a);
        print_array(c);
        std::cout << std::endl;

        a[0] = -1;
        b[0] = -2;
        c[0] = -3;
        print_array(a);
        print_array(b);
        print_array(c);
    }
    {
        Array<double> a(3);
        for (int i = 0; i < static_cast<int>(a.size()); i++) {
            a[i] = i;
        }
        std::cout << "Array size: " << a.size() << std::endl;
        print_array(a);
        std::cout << std::endl;

        Array<double> b;
        b = a;
        print_array(b);
        std::cout << std::endl;

        Array<double> c(a);
        print_array(c);
        std::cout << std::endl;

        a[0] = -1;
        b[0] = -2;
        c[0] = -3;
        print_array(a);
        print_array(b);
        print_array(c);
    }
    return 0;
}
