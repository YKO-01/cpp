/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:46:39 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 18:58:05 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	name = "none";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "Constructor ScavTrap Default called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& sTrap) : ClapTrap(sTrap.name)
{
	this->name = sTrap.name;
	this->hit_points = sTrap.hit_points;
	this->energy_points = sTrap.energy_points;
	this->attack_damage = sTrap.attack_damage;
	std::cout << "Constructor ScavTrap" << name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "Constructor ScavTrap " << name << " Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap " << name << " Called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "informing that ScavTrap is now in Gate " 
		<<	"keeper mode." << std::endl;
}

//==============	Attack		================
void	ScavTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		energy_points--;
		std::cout << "ScavTrap " << name << " attacks " << target <<", causing " 
			<< attack_damage << " points of damage" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " can't attacking " << target << std::endl;
}