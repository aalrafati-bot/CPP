/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:22:12 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/19 10:22:12 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>///std::atoi

static std::string trim_input(std::string& str)
{
    int start;
    int end;

    start = 0;
    end = str.length();
    while (start < end && (str[start] == ' ' || str[start] == '\t'))
        start++;
    while  (end > start && (str[end - 1] == ' ' || str[end - 1] == '\t'))
        end--;
    return (str.substr(start, end - start));
}

static void add_contact(PhoneBook& pbook)
{
    Contact new_contact;
    std::string input;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    input = trim_input(input);
    new_contact.setFirstName(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    input = trim_input(input);
    new_contact.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    input = trim_input(input);
    new_contact.setNickname(input);    

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    input = trim_input(input);
    new_contact.setPhoneNumber(input);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    input = trim_input(input);
    new_contact.setDarkestSecret(input);

    if (new_contact.getFirstName().empty() || new_contact.getLastName().empty()
    || new_contact.getNickname().empty() || new_contact.getPhoneNumber().empty()
    || new_contact.getDarkestSecret().empty())
        std::cout << "Error: A saved contact can't have empty fields!\n";
    else
    {
        pbook.add(new_contact);
        std::cout << "You saved a new contact!\n";
    }
}

static int is_digit(std::string& str)
{
    size_t x;
    
    x = 0;
    if (str.empty())
        return (0);//faalse
    while (x < str.length())
    {
        if (str[x] < '0' || str[x] > '9')
            return (0);///not num
        x++;
    }
    return (1);
}

static void search_conact(PhoneBook& pbook)
{
    std::string input;
    int index;

    if (pbook.search())///عرض الجدول
    {
        std::cout << "Enter the index: ";
        std::getline(std::cin, input);
        input = trim_input(input);
        if (!is_digit(input))
        {
            std::cout << "Error: input not even a number\n";
            return ;            
        }
        index = std::atoi(input.c_str());
        pbook.display(index);
    }
}

int main()
{
    PhoneBook pbook;
    std::string input;

    while (1)
    {
        std::cout << "Enter one of three commands (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, input))
        {
            std::cout << "\nError: getline failed" << std::endl;
            break;
        }
        if (input == "ADD")
            add_contact(pbook);
        else if (input == "SEARCH")
            search_conact(pbook);
        else if (input == "EXIT")
            break;///cause we are in a while loop
    }
    return (0);
}