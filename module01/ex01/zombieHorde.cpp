/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:25:59 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:25:59 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* ourzombies;
    int x;

    ourzombies = new Zombie[N];
    for(x = 0; x < N; x++)
    {
        ourzombies[x].setName(name);
    }
    return (ourzombies);
}