/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:23:29 by aalrofat          #+#    #+#             */
/*   Updated: 2026/10/19 10:23:29 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>//std::cout//std::getline
#include <iomanip>//std::setw(10) الاخراج او شكل الطباعة

class PhoneBook
{
    private:
        Contact contacts[8];
        int count;
        int oldestOne;
    
    public:
        PhoneBook();///فنكشن تجهيز تلقائي وبهيئ اللي فوق مثل count = 0; الخ
        void add(const Contact& c);
        int search() const;
        void display(int index) const;///ال const addاللي برا لهاي والفوق عشان انو ما رح نغير اشي عالكلاس بعكس ال add
};


#endif