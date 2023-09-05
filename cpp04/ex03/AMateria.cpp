/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:03:19 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/05 20:55:51 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "Destroy AMateria" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->type);
}
/*
void	AMateria::use(IChatacter& target)
{
	if (type == "ice")
		std::cout << "* shoots an ice bolt at  *" << std::endl;
	if (type == "cure")
		std::cout << "* heals <name>’s wounds *" << std::endl;
}
*/