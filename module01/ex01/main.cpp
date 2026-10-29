/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:25:46 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:25:46 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* z;
    int x;

    z = zombieHorde(10, "Horde");
    for (x = 0; x < 10; x++)
    {
        z[x].announce();
    }
    delete[] z;
    return (0);
}