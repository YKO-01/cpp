/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:55:11 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/01 20:09:14 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    
    // ClapTrap *ct;
    // ScavTrap sc("bigo");
    // ct = &sc;
    // ct->attack("anemy");

    // ScavTrap *sc = new ScavTrap("hello");
    // sc->takeDamage(4);

   //ClapTrap *scav = new ScavTrap("bigo");
   // delete (scav);
  //   system("leaks ScavTrap");
    
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
