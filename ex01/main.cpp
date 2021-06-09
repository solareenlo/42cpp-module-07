/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:00:20 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 08:28:42 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void    printX(T const& x) {
    std::cout << x << std::endl;
}

int main() {
    {
        int arr[] = {1, 2, 3};
        size_t size = sizeof(arr) / sizeof(int);
        ::iter(arr, size, printX);
    }
    {
        float arr[] = {1.1, 2.1, 3.1};
        size_t size = sizeof(arr) / sizeof(float);
        ::iter(arr, size, printX);
    }
    {
        double arr[] = {1.11, 2.11, 3.11};
        size_t size = sizeof(arr) / sizeof(double);
        ::iter(arr, size, printX);
    }
    {
        std::string arr[] = {"a", "b", "c"};
        size_t size = sizeof(arr) / sizeof(arr[0]);
        ::iter(arr, size, printX);
    }
    return 0;
}
