/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:55:11 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/01 20:32:34 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap *ct1 = new ScavTrap("korama");
    ClapTrap *ct2 = new FragTrap("nano");

    ct1->attack("bigo");
    ct2->attack("madara");


    delete(ct1);
    delete(ct2);
	// ScavTrap scav("bigo");

    // scav.attack("anemy");
    // scav.takeDamage(15);
    // scav.beRepaired(8);
    // scav.guardGate();
	return (0);
}
