/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:53:35 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/27 13:48:13 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iomanip>

#define FN "enter first name : "
#define LN "enter last name : "
#define NN "enter neck name : "
#define PN "enter phone number : "
#define DS "enter darket secret : "

class PhoneBook
{
	private :
		Contact contact[8];
	public :
		PhoneBook(void);
		void	ADD(int i);
		void	SEARCH(int i);
		void	display_contact(int i);
		void	display_all_info(int index);
};


#endif
