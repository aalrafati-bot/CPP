/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:27:51 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:27:51 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

///we can also do as past 
HumanB::HumanB(std::string name) : weapon(NULL), name(name) {}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() const
{
    if (weapon == NULL)
    {
        std::cout << name << " don't have weapon" << std::endl;
        return ;
    }
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;//weapon cause it pointer in class
}