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
    Fixed const s(20.05f);
    Fixed const s2(10.05f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "true " << (y > x) << std::endl;
    std::cout << "true " << (x < y) << std::endl;
    std:: cout << "false " << (x == y) << std::endl;
    
    std::cout << "normal max " << Fixed::max( x, y ) << std::endl;
    std::cout << "normal min " << Fixed::min( x, y ) << std::endl;
    std::cout << "const max " << Fixed::max( s, s2 ) << std::endl;
    std::cout << "const min " << Fixed::min( s, s2 ) << std::endl;
    
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
