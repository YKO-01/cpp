/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:13:35 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/06 17:42:07 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private :
		std::string name;
		int indexSlot;
		int indexFloot;
		AMateria **slot;
		AMateria **floor;
	public :
		Character();
		Character(std::string name);
		Character(const Character& ch);
		~Character();
		std::string const &getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};


#endif