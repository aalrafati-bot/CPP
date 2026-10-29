/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:25:01 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:25:01 by aalrofat         ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        void announce(void); 
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif