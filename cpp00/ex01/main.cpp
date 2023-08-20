/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:18:06 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/20 10:12:02 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	int	i;
	std::string ch;
	PhoneBook phone;

	i = 0;
	while (1 && !std::cin.eof())
	{
		std::cout << "enter your choise : ";
		std::cin >> ch;
		std::cout << "\n";
		if (i >= 8)
			i = 7;
		if (ch == "ADD")
			phone.ADD(i++);
		if (ch == "SEARCH")
		{
			phone.display_contact(i);
			phone.SEARCH(i);
		}
		if (ch == "EXIT")
			break;
	}
	return (0);
}