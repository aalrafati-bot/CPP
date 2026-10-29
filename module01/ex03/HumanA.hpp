/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:27:40 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:27:40 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP 
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& weapon;///refrence can't be NULL
        std::string name;
    
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack() const;
};

#endif