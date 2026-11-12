/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:53:50 by aalrofat          #+#    #+#             */
/*   Updated: 2026/11/12 11:53:50 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return (x);
	return (y);

}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x < y)
		return (x);
	return (y);
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
	if (x > y)
		return (x);
	return (y);
}
// we call it using the name of class Fixed::max
const Fixed& Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x > y)
		return (x);
	return (y);
}
