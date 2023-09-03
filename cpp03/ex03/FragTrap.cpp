/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:51:32 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/03 13:37:12 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
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