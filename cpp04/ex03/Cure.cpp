/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:41:52 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/06 23:52:33 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Constructor Cure Called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Destroy Cure" << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria("cure")
{

}

AMateria*	Cure::clone() const
{
	AMateria *m = new Cure();
	return (m);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}