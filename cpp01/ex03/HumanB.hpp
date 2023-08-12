/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:23:00 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/07 14:15:29 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private :
		std::string name;
		Weapon	*weapon;
	public :
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon &w);
		void	attack(void);
		void	setWeapon(Weapon &w);
		~HumanB();
};

#endif