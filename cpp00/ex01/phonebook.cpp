/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:51:38 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/16 11:05:33 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
# include <iomanip>

// PhoneBook::PhoneBook(std::string fn, std::string ln, std::string nn, int num, std::string ds, int i)
// {
// 	contact[i].firstname = fn;
// 	contact[i].lastname = ln;
// 	contact[i].neckname = nn;
// 	contact[i].phone_num = num;
// 	contact[i].secret = ds;
// }

PhoneBook::PhoneBook(void)
{
}

void	PhoneBook::ADD(int i)
{
	std::string	var;

	std::cout << "enter your first name : ";
	fflush(stdin);
	std::getline(std::cin, var);
	if (!var.empty())
		contact[i].set_firstname(var);
	std::cout << "enter your last name : ";
	std::getline(std::cin, var);
	if (!var.empty())
		contact[i].set_lastname(var);
	std::cout << "enter your neck name : ";
	std::getline(std::cin, var);
	if (!var.empty())
		contact[i].set_neckname(var);
	std::cout << "enter your phone number : ";
	std::getline(std::cin, var);
	if (!var.empty())
		contact[i].set_phonenumber(var);
	std::cout << "enter your darket secret : ";
	std::getline(std::cin, var);
	if (!var.empty())
		contact[i].set_secret(var);
}

void	PhoneBook::display_contact(int i)
{
	int index;
	std::cout << "\n";
	std::cout << std::setw(10) << std::left << "index";
	std::cout << " | ";
	std::cout << std::setw(10) << std::left << "firstname";
	std::cout << " | ";
	std::cout << std::setw(10) << std::left << "lastname";
	std::cout << " | ";
	std::cout << std::setw(10) << std::left << "neckanme";
	std::cout << " | " << std::endl;
	index = -1;
	while(++index < i)
	{
		std::cout << std::setw(10) << std::left << index + 1;
		std::cout << " | ";
		if (contact[index].get_firstname().length() > 10)
			std::cout << std::setw(9) << std::left << contact[index].get_firstname().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::left << contact[index].get_firstname();
		std::cout << " | ";
		if (contact[index].get_lastname().length() > 10)
			std::cout << std::setw(9) << std::left << contact[index].get_lastname().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::left << contact[index].get_lastname();
		std::cout << " | ";
		if (contact[index].get_neckname().length() > 10)
			std::cout << std::setw(9) << std::left << contact[index].get_neckname().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::left << contact[index].get_neckname();
		std::cout << " | " << std::endl;
	}
	std::cout << "\n";
}

void	PhoneBook::SEARCH(int i)
{
	int index;
	std::cout << "enter index : ";
	std::cin >> index;
	index--;
	if (index < 0 || index > i)
	{
		std::cout << "invalid index\n";
		return ;
	}
	std::cout << "first name\t:\t" << contact[index].get_firstname() << std::endl;
	std::cout << "last name\t:\t" << contact[index].get_lastname() << std::endl;
	std::cout << "neck name\t:\t" << contact[index].get_neckname() << std::endl;
	std::cout << "number phone\t:\t" << contact[index].get_phonenumber() << std::endl;
	std::cout << "darket secret\t:\t" << contact[index].get_secret() << std::endl;
}
