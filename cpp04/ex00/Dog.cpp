/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:32:39 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/04 19:13:04 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Destroy Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dogs Hawhwaw" << std::endl;
}