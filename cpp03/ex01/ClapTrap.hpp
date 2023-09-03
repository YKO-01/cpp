/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:55:48 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/03 20:55:17 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap
{
	protected :
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public :
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// Get And Set
		// std::string	getName();
		// int		getHitPoints();
		// int		getEnergyPoints();
		// int		getAttackDamage();
		// void		setName(std::string Name);
		// void		setHitPoint(int HitPoints);
		// void		setEnergyPoint(int EnergyPoints);
		// void		setAttackDamage(int AttackDamage);
};

#endif
