/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:53:40 by aalrofat          #+#    #+#             */
/*   Updated: 2026/11/12 11:53:40 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed x(5);
    Fixed y(10);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "true " << (y > x) << std::endl;
    std::cout << "true " << (x < y) << std::endl;
    std:: cout << "false " << (x == y) << std::endl;
    
    std::cout << Fixed::max( x, y ) << std::endl;
    std::cout << Fixed::min( x, y ) << std::endl;
    
    std::cout << std::endl;
    std::cout << (x + y) << std::endl;
    std::cout << (x - y) << std::endl;
    std::cout << (x * y) << std::endl;
    std::cout << (x / y) << std::endl;
    
    std::cout << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}
