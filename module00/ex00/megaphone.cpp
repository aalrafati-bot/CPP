/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:21:47 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/19 10:21:47 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>///cout
#include <cctype>//toupper
#include <string>//char * std::string

int main(int argc, char **argv)
{
    std::string word;
    int x;
    size_t y;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    ///handle words
    for (x = 1; x < argc; x++)
    {
        word = argv[x];///save and convert the argument(string)(char *) in to std::string
        for (y = 0; y < word.length(); y++)
        {
            std::cout << (char)std::toupper(word[y]);
        }
        if (x < argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}
