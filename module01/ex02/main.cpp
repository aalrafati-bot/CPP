/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:26:36 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/29 11:26:36 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str =  "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "memory address of str: " << &str << std::endl;
    std::cout << "memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address of stringREF: " << &stringREF << std::endl;

    std::cout << "value of str: " << str << std::endl;
    std::cout << "value of stringPTR: " << *stringPTR << std::endl;//derefrences
    std::cout << "value of stringREF: " << stringREF << std::endl;
    return (0);
}