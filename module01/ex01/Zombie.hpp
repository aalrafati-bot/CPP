/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:25:57 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:25:57 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:    
        std::string name;

    public:
        Zombie();//so we can use  new Zombie[N];
        ~Zombie();
        void announce(void);
        void setName(const std::string& name);
};

Zombie* zombieHorde( int N, std::string name );

#endif