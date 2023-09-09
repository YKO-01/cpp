/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:51:32 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 18:55:48 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	name = "none";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "Constructor FragTrap Default called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fTrap) : ClapTrap(fTrap.name)
{
	this->name = fTrap.name;
	this->hit_points = fTrap.hit_points;
	this->energy_points = fTrap.energy_points;
	this->attack_damage = fTrap.attack_damage;
	std::cout << "Constructor FragTrap" << name << " called" << std::endl;
}

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