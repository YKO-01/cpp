/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:03:19 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/06 23:37:23 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "Constructor AMateria Called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destroy AMateria" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->type);
}
