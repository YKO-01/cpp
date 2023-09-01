/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:15:56 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/01 20:36:51 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//==============	Constructor	================
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Constructor ClapTrap " << name << " called" << std::endl;
}

//==============	Destructor	================
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap " << name << " called" << std::endl;
}

//==============	Attack		================
void	ClapTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		//hit_points = hit_points - attack_damage;
		energy_points--;
		std::cout << "ClapTrap " << name << " attacks " << target <<", causing " 
			<< attack_damage << " points of damage" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " can't attacking " << target << std::endl;;
}

//==============	Take Damage	================
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points > 0 && energy_points > 0)
	{
		//attack_damage = attack_damage - amount;
		hit_points = hit_points - amount;
		std::cout << "ClapTrap " << name 
			<< " take damage , new hit points "
			<< hit_points << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " can't take damage" << std::endl;
}

//==============	Be Repaired	================
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

//===============	Get Members	================
std::string 	ClapTrap::getName()
{
	return (name);
}

int	ClapTrap::getHitPoints()
{
	return (hit_points);
}

int	ClapTrap::getEnergyPoints()
{
	return (energy_points);
}
int	ClapTrap::getAttackDamage()
{
	return (attack_damage);
}

//==============	Set Members	==================
void	ClapTrap::setName(std::string Name)
{
	name = Name;
}

void	ClapTrap::setHitPoint(int HitPoints)
{
	hit_points = HitPoints;
}

void	ClapTrap::setEnergyPoint(int EnergyPoints)
{
	energy_points = EnergyPoints;
}

void	ClapTrap::setAttackDamage(int AttackDamage)
{
	attack_damage = AttackDamage;
}
