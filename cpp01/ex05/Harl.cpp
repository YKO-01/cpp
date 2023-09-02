/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:43:18 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/11 23:38:13 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
		enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
		years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


Harl::Harl()
{
}

Harl::~Harl()
{
	
}

void Harl::complain(std::string level)
{
	int i;
	void (Harl::*arrptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr[4] = {"debug", "info", "warning", "error"};

	i = -1;
	while (++i < 4)
	{
		if (arr[i] == level)
		{
			(this->*arrptr[i]) ();
		}
	}
}
