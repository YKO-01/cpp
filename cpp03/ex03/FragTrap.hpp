/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:45:53 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 18:58:45 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap& fTrap);
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif