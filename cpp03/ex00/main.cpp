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
    clap.beRepaired(10);
    clap.takeDamage(10);
    clap.attack("hello");
    clap.beRepaired(10);
    clap.takeDamage(10);
    clap.attack("hello");
    clap.beRepaired(10);
    clap.takeDamage(10);
    clap.attack("hello");
    clap.beRepaired(10);
    clap.takeDamage(10);
    return (0);
}