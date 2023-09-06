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
	
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destroy MateriaSource" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (index > 4)
	{
		arr[index++] = m->clone();
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int i = 0;
	while (i++ < 4)
	{
		if (arr[i] != NULL)
		{
			if (type == arr[i]->getType())
				return (arr[i]->clone());
		}
	}

	return (0);
}