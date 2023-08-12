/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:08:42 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/07/19 10:15:48 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
}

std::string Contact::get_firstname()
{
    return (firstname);
}
std::string Contact::get_lastname()
{
    return (lastname);
}
std::string Contact::get_neckname()
{
    return (neckname);
}
std::string Contact::get_phonenumber()
{
    return (phone_num);
}

std::string Contact::get_secret()
{
    return (secret);
}

void    Contact::set_firstname(std::string fname)
{
    firstname = fname;
}

void    Contact::set_lastname(std::string lname)
{
    lastname = lname;
}

void    Contact::set_neckname(std::string nname)
{
    neckname = nname;
}

void    Contact::set_phonenumber(std::string pnumber)
{
    phone_num = pnumber;
}

void    Contact::set_secret(std::string dsecret)
{
    secret = dsecret;
}