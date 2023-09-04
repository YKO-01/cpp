/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:54:10 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/04 20:28:32 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "animal";
    std::cout << "Constructor Animal Called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destroy Animal" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}



