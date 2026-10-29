/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:23:22 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/19 10:23:22 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& name)
{
    this->firstName = name;
}
std::string Contact::getFirstName() const
{
    return (this->firstName);
}

void Contact::setLastName(const std::string& name)
{
    this->lastName = name;
}
std::string Contact::getLastName() const
{
    return (this->lastName);
}

void Contact::setNickname(const std::string& name)
{
    this->nickname = name;
}
std::string Contact::getNickname() const
{
    return (this->nickname);
}

void Contact::setPhoneNumber(const std::string& name)
{
    this->phoneNumber = name;
}
std::string Contact::getPhoneNumber() const
{
    return (this->phoneNumber);
}

void Contact::setDarkestSecret(const std::string& name)
{
    this->darkestSecret = name;
}
std::string Contact::getDarkestSecret() const
{
    return (this->darkestSecret);
}