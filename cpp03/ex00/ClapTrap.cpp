/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:15:56 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 19:07:21 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "none";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Constructor Default called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cTrap)
{
	this->name = cTrap.name;
	this->hit_points = cTrap.hit_points;
	this->energy_points = cTrap.energy_points;
	this->attack_damage = cTrap.attack_damage;
	std::cout << "Constructor " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Constructor " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor " << name << " called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		energy_points--;
		std::cout << "ClapTrap " << name << " attacks " << target <<", causing " 
			<< attack_damage << " points of damage" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << "can't attacking " << target;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points > 0 && energy_points > 0)
	{
		hit_points = hit_points - amount;
		std::cout << "ClapTrap " << name 
			<< " take damage , new hit points "
			<< hit_points << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " can't take damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points > 0 && energy_points > 0)
	{
		hit_points = hit_points + amount;
		energy_points--;
		std::cout << "ClapTrap " << name 
			<< " repaired , new hit points  " 
			<< hit_points << std::endl;
		return ;
	}
	std::cout << "Claptrap " << name << " can't be repaired" << std::endl;
}
