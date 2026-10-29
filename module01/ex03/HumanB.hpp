/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:27:48 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:27:48 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB 
{
    private:
        Weapon* weapon;///pointer can be NULL
        std::string name;
    
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& weapon);///weapon there
        void attack() const;
};

#endif
