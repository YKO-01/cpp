/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:43:48 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/02 15:12:22 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie* zombie;
    int i;

    zombie = zombieHorde(N, "hello");;
    i = -1;
    while (++i < N)
    	zombie[i].announce();
	
	delete[] zombie;
	return (0);
}
