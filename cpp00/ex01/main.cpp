/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:18:06 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/27 13:36:20 by ayakoubi         ###   ########.fr       */
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
		//if (i >= 8)
		if (ch == "ADD")
		{
			phone.ADD(i % 8);
			i++;
		}
		if (ch == "SEARCH")
			phone.SEARCH(i);
		if (ch == "EXIT")
			break;
	}
	return (0);
}