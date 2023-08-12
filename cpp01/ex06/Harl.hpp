/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:20:28 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/09 22:12:49 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public :
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif