/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:52:40 by aalrofat          #+#    #+#             */
/*   Updated: 2026/11/12 11:52:40 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)  : fixedPoint(other.fixedPoint)
{
    std::cout << "Copy constructor called" << std::endl;///b(a)
}

///c = b;
Fixed& Fixed::operator = (const Fixed& other)
{
    if (this != &other)/// so save us from c = c
        this->fixedPoint = other.fixedPoint;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);////cause we want the value
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;   
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixedPoint);
}




