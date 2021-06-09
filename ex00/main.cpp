/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 07:00:42 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 07:14:34 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "whatever.hpp"

int main() {
    {
        char a = 65, b = 66;
        std::cout << a << " " << b << std::endl;
        ::swap(a, b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a, b) << std::endl;
        std::cout << min(a, b) << std::endl;
        std::cout << std::endl;
    }
    {
        int a = 1, b = 2;
        std::cout << a << " " << b << std::endl;
        ::swap(a, b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a, b) << std::endl;
        std::cout << min(a, b) << std::endl;
        std::cout << std::endl;
    }
    {
        float a = 1.0, b = 2.0;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << a << " " << b << std::endl;
        ::swap(a, b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a, b) << std::endl;
        std::cout << min(a, b) << std::endl;
        std::cout << std::defaultfloat;
        std::cout << std::endl;
    }
    {
        double a = 1.0, b = 2.0;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << a << " " << b << std::endl;
        ::swap(a, b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a, b) << std::endl;
        std::cout << min(a, b) << std::endl;
        std::cout << std::defaultfloat;
        std::cout << std::endl;
    }
    return 0;
}
