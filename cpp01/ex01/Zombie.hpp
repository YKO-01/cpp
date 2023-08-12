/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:44:32 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/03 12:48:27 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie(void);
        Zombie(std::string name);
        void    announce(void);
        ~Zombie();
        void    set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);



#endif