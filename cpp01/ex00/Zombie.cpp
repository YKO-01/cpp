/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:03:54 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/02 14:29:28 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "destroy.." << std::endl;
}

Zombie*	newZombie(std::string name)
{
	Zombie*	newZombie;
	newZombie = new Zombie(name);
	// return (new Zombie(name));
	return (newZombie);
}

void	randomChump(std::string name )
{
	Zombie z(name);
	z.announce();
}
