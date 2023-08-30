/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:08:42 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/30 13:11:46 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    firstname = fn;
    lastname = ln;
    neckname = nn;
    phone_num = pn;
    secret = ds;
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

Contact& Contact::operator = (const Contact& contact)
{
    this->firstname = contact.firstname;
    this->lastname = contact.lastname;
    this->neckname = contact.neckname;
    this->phone_num = contact.phone_num;
    this->secret = contact.secret;
    return (*this);
}