/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:53:35 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/07/20 20:26:23 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
	private :
		Contact contact[8];
	public :
		PhoneBook(void);
		void	ADD(int i);
		void	SEARCH(int i);
		void	display_contact(int i);
		
};

#endif
