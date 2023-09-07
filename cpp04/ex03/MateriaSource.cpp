/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:19:27 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/06 17:48:57 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i;

	index = 0;
	i = 0;
	arr = new AMateria*[4];
	while (i++ < 4)
		arr[i] = NULL;
	std::cout << "Constructor MateriaSource Called" << std::endl;
	
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	
}

MateriaSource::~MateriaSource()
{	
	std::cout << "Destroy MateriaSource" << std::endl;
	int	i;

	i = -1;
	while(++i < 4)
		delete arr[i];
	delete arr;
}


void	MateriaSource::learnMateria(AMateria* m)
{
	if (index < 4)
		arr[index++] = m->clone();
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int i = 0;
	while (i < 4)
	{
		if (arr[i] != NULL)
		{
			if (arr[i]->getType() == type)
				return (arr[i]->clone());
		}
		i++;
	}

	return (0);
}
