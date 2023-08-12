/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:45:34 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/03 12:49:33 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* newZombie;
    int i;
    
    newZombie = new Zombie[N];
    i = -1;
    while (++i < N)
        newZombie[i].set_name(name);
    return (newZombie);
}
