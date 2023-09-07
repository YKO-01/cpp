/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:05:12 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/06 15:29:29 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
class AMateria;

class MateriaSource : public IMateriaSource
{
	private :
		int			index;
		AMateria	**arr;
	public :
		MateriaSource();
		MateriaSource(const MateriaSource& ms);
		~MateriaSource();
		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
};


#endif
