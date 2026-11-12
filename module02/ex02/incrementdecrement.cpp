/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incrementdecrement.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:53:37 by aalrofat          #+#    #+#             */
/*   Updated: 2026/11/12 11:53:37 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator++()//pre, ++a;
{
	this->fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)///post, a++; int is sth unreal
{
	Fixed temp(*this);
	this->fixedPoint++;
	return (temp);
}

Fixed& Fixed::operator--()//--a
{
	this->fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)//a--;
{
	Fixed temp(*this);
	this->fixedPoint--;
	return (temp);
}