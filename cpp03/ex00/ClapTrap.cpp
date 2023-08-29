/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:15:56 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/29 21:30:32 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
		// hit_points = hit_points - attack_damage;
		energy_points--;
		std::cout << "ClapTrap " << name << " attacks " << target <<", causing " 
			<< attack_damage << " points of damage" << std::endl;
		return ;
	}
	std::cout << "you can't attacking " >> target;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	
	attack_damage = attack_damage - amount;
	std::cout << "ClapTrap " << name << " take damage , causing " 
		<< attack_damage << " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points > 0 && energy_points > 0)
	{
		hit_points = hit_points + amount;
		energy_points--;
		std::cout << "ClapTrap " << name << " repaired , causing " 
			<< attack_damage << " points of damage" << std::endl;
	}
}