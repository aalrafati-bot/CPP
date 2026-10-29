/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:23:43 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/19 10:23:43 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
    oldestOne = 0;
}

void  PhoneBook::add(const Contact& c)
{
    if (count < 8)
    {
        contacts[count] = c;///ضفناه لل array
        count++;
    }
    else
    {
        contacts[oldestOne] = c;
        oldestOne++;
        if (oldestOne == 8)///صرنا برا بنرجع نصفر
            oldestOne = 0;
    }
}

static std::string  truncated(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

int PhoneBook::search() const
{
	int x;

	x = 0;
	if (count == 0)
	{
		std::cout << "Error: The PhoneBook is empty\n";
		return (0);
	}
    std::cout << "|" << std::setw(10) << "index"
			  << "|" << std::setw(10) << "first name"
			  << "|" << std::setw(10) << "last name"
			  << "|" << std::setw(10) << "nickname" << "|\n";
	while (x < count)
	{
		std::cout << "|" << std::setw(10) << x
				  << "|" << std::setw(10) << truncated(contacts[x].getFirstName())
				  << "|" << std::setw(10) << truncated(contacts[x].getLastName())
				  << "|" << std::setw(10) << truncated(contacts[x].getNickname()) << "|\n";
		x++;
	}
	return (count);
}

void PhoneBook::display(int index) const////data class al PhoneBook وعد اتضل ثابتة
{
	if (index < 0 || index >= count)
	{
		std::cout << "Error: index is out of range\n";
		return ;
	}
	else
	{
		std::cout << "First Name: " << contacts[index].getFirstName() << "\n";
		std::cout << "Last Name: " << contacts[index].getLastName() << "\n";
		std::cout << "Nickname: " << contacts[index].getNickname() << "\n";
		std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << "\n";
		std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << "\n";
	}

}
