/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:51:32 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/01 20:40:51 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
    std::cout << "Constructor FragTrap Called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap Called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "high fives" << std::endl;
}