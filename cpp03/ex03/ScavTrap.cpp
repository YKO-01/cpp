/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:46:39 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/01 20:40:21 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << "Constructor ScavTrap " << name << " Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap " << getName() << " Called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "informing that ScavTrap is now in Gate " 
		<<	"keeper mode." << std::endl;
}

//==============	Attack		================
void	ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		//hit_points = hit_points - attack_damage;
		setEnergyPoint(getEnergyPoints() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target <<", causing " 
			<< getAttackDamage() << " points of damage" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << "can't attacking " << target;
}