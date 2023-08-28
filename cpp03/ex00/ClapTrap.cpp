/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:15:56 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/28 20:24:48 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Constructor name called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	this->hit_points = this->hit_points - this->attack_damage;
	std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " 
		<< this->attack_damage << " points of damage" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_points = this->hit_points + amount;
	std::cout << "ClapTrap " << this->name << "repaired , causing " 
		<< this->attack_damage << " points of damage" << std::endl;
}