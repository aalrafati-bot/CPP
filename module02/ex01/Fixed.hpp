/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:53:13 by aalrofat          #+#    #+#             */
/*   Updated: 2026/11/12 11:53:13 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int     fixedPoint;
        static const int    fractionalBits = 8;///allow cause its static const

    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floatt);
        Fixed(const Fixed& other);
        Fixed& operator = (const Fixed& other);
        ~Fixed();

        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
///this is overload of operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif