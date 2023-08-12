/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:57:13 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/07/19 10:16:00 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
	private :
		std::string	firstname;
		std::string	lastname;
		std::string	neckname;
		std::string phone_num;
		std::string	secret;
	public :
		Contact(void);
		Contact(std::string fn, std::string ln, std::string nn, int pn, std::string ds);
	
	public :
		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_neckname();
		std::string	get_phonenumber();
		std::string	get_secret();
	public :
		void	set_firstname(std::string fname);
		void	set_lastname(std::string lname);
		void	set_neckname(std::string nname);
		void	set_phonenumber(std::string pnumber);
		void	set_secret(std::string dsecret);
		
};

#endif
