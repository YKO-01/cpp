/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:37:27 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/06 17:43:54 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	
}

Character::Character(std::string name)
{
	int i;

	this->name = name;
	indexSlot = 0;
	indexFloot = 0;
	slot = new AMateria*[4];
	i = 0;
	while (i++ < 4)
		slot[i] = NULL;
	floor = new AMateria*[4];
	i = 0;
	while (i++ < 4)
		floor[i] = NULL;
	std::cout << "Constructor Character Called" << std::endl;
}

Character::Character(const Character& ch)
{
	this->name = ch.name;
}

Character::~Character()
{
	std::cout << "Destroy Character" << std::endl;
}

std::string	const& Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (indexSlot < 4)
		slot[indexSlot++] = m;
	else
		std::cout << "slot is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= indexSlot)
	{
		if (indexSlot-- >= 0)
			floor[indexFloot] = slot[idx];
		else
			std::cout << "there not slot" << std::endl;
	}
	else
		std::cout << "invalid index" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= indexSlot)
		slot[idx]->use(target);
}
