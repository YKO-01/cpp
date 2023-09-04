/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:12:43 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/04 19:11:05 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Destroy Cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "cats don’t bark" << std::endl;
}

