/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:36:54 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/06 23:40:08 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Constructor Ice Called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destroy Ice" << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria("ice")
{
    
}

AMateria*   Ice::clone() const
{
    AMateria *m = new Ice();
    return (m);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
