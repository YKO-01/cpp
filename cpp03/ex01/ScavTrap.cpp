/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:46:10 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/03 11:04:00 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
		//hit_points = hit_points - attack_damage;
		energy_points--;
		std::cout << "ScavTrap " << name << " attacks " << target <<", causing " 
			<< attack_damage << " points of damage" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " can't attacking " << target << std::endl;
}