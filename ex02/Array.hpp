/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:43:55 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 16:26:14 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_ARRAY_HPP_
#define EX02_ARRAY_HPP_

#include <exception>

template<typename T>
class   Array {
 public:
    Array() : n_(0), a_(new T[0]) {}
    explicit Array(unsigned int n) : n_(n), a_(new T[n]) {}
    Array(Array const& src) : a_(NULL) { this->operator=(src); }
    ~Array() { delete[] a_; }

    Array&  operator=(Array const& right) {
        if (this->a_)
            this->~Array();
        this->n_ = right.n_;
        this->a_ = new T[this->n_];
        for (unsigned int i = 0; i < this->n_; i++)
            this->a_[i] = right.a_[i];
        return (*this);
    }

    T const&  operator[](unsigned int i) const {
        if (i >= this->n_ || i < 0)
            throw std::exception();
        return (this->a_[i]);
    }

    T&  operator[](unsigned int index) {
        if (index >= this->n_ || index < 0)
            throw std::exception();
        return (this->a_[index]);
    }

    unsigned int    size() const { return (this->n_); }

 private:
    unsigned int    n_;
    T*              a_;
};

#endif  // EX02_ARRAY_HPP_
