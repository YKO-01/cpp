/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:19:35 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/02 13:46:17 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        void    announce();
};

Zombie*	newZombie(std::string name);
void    randomChump( std::string name );