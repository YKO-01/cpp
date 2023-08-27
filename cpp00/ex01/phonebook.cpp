/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:51:38 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/27 15:36:15 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
}

void	PhoneBook::ADD(int i)
{
	std::string arr[5] = {FN, LN, NN, PN, DS};
	std::string var[5];
	int index;
	index = -1;
	fflush(stdin);
	while (++index <= 4)
	{
		std::cout << arr[index];
		std::getline(std::cin, var[index]);
		if (var[index].empty())
			index--;
		if (std::cin.eof())
			return ;
	}
	contact[i] = Contact(var[0], var[1], var[2], var[3], var[4]);
}

void	PhoneBook::display_contact(int i)
{
	int index;
	int j;

	if (std::cin.eof())
		return ;
	std::cout << std::setw(10) << std::left << "index" << "|";
	std::cout << std::setw(10) << std::left << "firstname" << "|";
	std::cout << std::setw(10) << std::left << "lastname" << "|";
	std::cout << std::setw(10) << std::left << "neckanme" << "|" << std::endl;
	index = -1;
	if (i >= 8)
		i = 8;
	while(++index < i)
	{
		std::string arr[3] = {contact[index].get_firstname(), contact[index].get_lastname(), contact[index].get_neckname()};
		std::cout << std::setw(10) << std::left << index + 1 << "|";
		j = -1;
		while (++j < 3)
		{
			if (arr[j].length() > 10)
				std::cout << std::setw(10) << std::left << arr[j].substr(0, 10).replace(9, 1, ".") << "|";
			else
				std::cout << std::setw(10) << std::left << arr[j] << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "\n";
}

void	PhoneBook::display_all_info(int index)
{
	if (std::cin.eof())
		return ;
	std::cout << "first name\t:\t" << contact[index].get_firstname() << std::endl;
	std::cout << "last name\t:\t" << contact[index].get_lastname() << std::endl;
	std::cout << "neck name\t:\t" << contact[index].get_neckname() << std::endl;
	std::cout << "number phone\t:\t" << contact[index].get_phonenumber() << std::endl;
	std::cout << "darket secret\t:\t" << contact[index].get_secret() << std::endl;
}

void	PhoneBook::SEARCH(int i)
{
	std::string index;
	int n;
	int len;

	if (i == 0)
	{
		std::cout << "\tphone_book is empty" << std::endl;
		return ;
	}
	this->display_contact(i);
	if (std::cin.eof())
		return ;
	while (1)
	{
		std::cout << "enter index : ";
		std::cin >> index;
		n = atoi(index.c_str());
		n--;
		if (n >= 0 && n < i)
			break;
		else
			std::cout << "invalid index\n";
	}
	this->display_contact(n);
}
