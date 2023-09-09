/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:55:11 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 19:08:24 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{    
    ScavTrap scav("bigo");

    scav.attack("anemy");
    scav.takeDamage(15);
    scav.beRepaired(8);
    scav.takeDamage(65);
    scav.attack("anemy");
    scav.takeDamage(20);
    scav.attack("anemy");
    scav.takeDamage(15);
    scav.attack("anemy");
    scav.takeDamage(40);
    scav.attack("hhhhh");
    scav.guardGate();
	return (0);
}
