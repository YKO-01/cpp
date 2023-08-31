/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:55:11 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/29 19:51:13 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("foo");
    clap.attack("hello");
    clap.attack("hello");
    clap.beRepaired(4);
    clap.takeDamage(6);
    clap.attack("word");
    clap.beRepaired(2);
    clap.attack("hello");
    clap.beRepaired(8);
    clap.takeDamage(5);
    clap.takeDamage(8);
    clap.attack("bbbb");
    clap.attack("word");
    clap.beRepaired(10);
    clap.takeDamage(15);


	return (0);
}
