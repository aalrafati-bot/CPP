/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:24:41 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:24:41 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie firstZ("Normal");///constructor
    firstZ.announce();

    Zombie* z = newZombie("Heapzombie");///constructor
    z->announce();
    delete (z); //deconstructor

    randomChump("Stackzombie");//insidefunction
    return (0);
}