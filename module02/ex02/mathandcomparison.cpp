/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathandcomparison.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:53:46 by aalrofat          #+#    #+#             */
/*   Updated: 2026/11/12 11:53:46 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& other) const
{
    return (this->fixedPoint > other.fixedPoint);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->fixedPoint < other.fixedPoint);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->fixedPoint >= other.fixedPoint);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->fixedPoint <= other.fixedPoint);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->fixedPoint == other.fixedPoint);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->fixedPoint != other.fixedPoint);
}

///matmatics
Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.fixedPoint = this->fixedPoint + other.fixedPoint;
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.fixedPoint = this->fixedPoint - other.fixedPoint;
	return (result);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result.fixedPoint = ((long long)this->fixedPoint * other.fixedPoint) / 256;///to avoid overflow
	return (result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result.fixedPoint = (((long long)this->fixedPoint * 256) / other.fixedPoint);
	return (result);
}
