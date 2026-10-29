/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:33:20 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:33:20 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
    
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
static int convert_string_to_num(const std::string& level)
{
    int numlevel;///to convert argument from string to int so we can use switch
    int x;

    numlevel = -1;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (x = 0; x < 4; x++)
    {
        if (level == levels[x])
        {
            numlevel = x;
            break;
        }
    }
    return (numlevel);

}

void Harl::complain(std::string level)
{
    int numlevel; 
    
    numlevel = convert_string_to_num(level);
    switch (numlevel)///2
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            this->debug();
            // fall through
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            this->info();
            // fall through
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
            // fall through
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

}