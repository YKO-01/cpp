/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:27:00 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/07 21:38:11 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{
    
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon &w)
{
    this->name = name;
    this->weapon = &w;
}
void HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}

void    HumanB::attack(void)
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else 
        std::cout << this->name << " attacks with their " << std::endl;
}