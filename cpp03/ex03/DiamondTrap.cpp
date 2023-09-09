/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:54:19 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 19:02:54 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	name = "none";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;;
	attack_damage = FragTrap::attack_damage;
	std::cout << "Constructor DiamondTrap Default called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dTrap) : ClapTrap(dTrap.name), ScavTrap(dTrap.name), FragTrap(dTrap.name)
{
	this->name = dTrap.name;
	this->hit_points = dTrap.hit_points;
	this->energy_points = dTrap.energy_points;
	this->attack_damage = dTrap.attack_damage;
	std::cout << "Constructor DiamondTrap" << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "Constructor DiamondTrap Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name : " << this->name 
				<< std::endl << "and ClapTram name : "
				<< ClapTrap::name << std::endl;
}