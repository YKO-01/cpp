/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:32:39 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/04 20:13:06 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Construtor Dog Called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destroy Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dogs Hawhwaw" << std::endl;
}
