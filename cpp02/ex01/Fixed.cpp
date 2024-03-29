/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:59:02 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 17:51:18 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;
/*Default Constructor*/

Fixed::Fixed():fixed_point(0.0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Int Constructor */
Fixed::Fixed(const int intNbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = intNbr * (1 << fract);
}

/* Float Constructor */
Fixed::Fixed(const float floatNbr)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(floatNbr * (1 << fract));
}

Fixed::Fixed(const Fixed& copy)
{ 
	this->fixed_point = copy.fixed_point;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& copy)
{
	this->fixed_point = copy.fixed_point;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->fixed_point) / (1 << fract));
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point / (1 << fract));
}

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
