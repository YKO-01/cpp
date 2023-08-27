/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:24:48 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/21 13:50:55 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::raw = 8;
//============= Default Constructor ============/
Fixed::Fixed():fixed_point(0.0)
{
}

//============= Int Constructor ================/
Fixed::Fixed(const int intNbr)
{
	this->fixed_point = intNbr * (1 << raw);
}

//============= Float Constructor ==============/
Fixed::Fixed(const float floatNbr)
{
	fixed_point = roundf(floatNbr * (float)(1 << raw));
}

//============= Copy Constructor ==============/
Fixed::Fixed(const Fixed& copy)
{ 
	this->fixed_point = copy.fixed_point;
}

//============= Destructure ==============/
Fixed::~Fixed()
{
}

//============= get & set ==============/
int	Fixed::getRawBits(void)
{
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

//============= Copy Asgnement Operator ==============/
Fixed& Fixed::operator = (const Fixed& copy)
{
	(void) copy;
	this->fixed_point = copy.fixed_point;
	return (*this);
}

//============= Convert Fixed Point to float & to int  ==============/
float	Fixed::toFloat(void) const
{
	return ((float)(this->fixed_point) / (float)(1 << raw));
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point / (1 << raw));
}

//============= Insertinon Operator ==============/
std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

//============ Arithmetic Operators ===========/

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed f;
	f.fixed_point = this->toFloat() +  fixed.fixed_point;
	return (f);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed f;
	f.fixed_point = this->toFloat() -  fixed.fixed_point;
	return (f);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed f;
	f.fixed_point = this->toFloat() * fixed.fixed_point;
	return (f);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed f;
	this->fixed_point = toFloat();
	f.fixed_point = this->toFloat() /  fixed.fixed_point;
	return (f);
}

//============== Incremen & Decrement Operators ============/

Fixed Fixed::operator++()
{
    Fixed f;
    f.fixed_point = ++this->fixed_point;
    return (f);
}

Fixed Fixed::operator--()
{
    Fixed f;
    f.fixed_point = --this->fixed_point;
    return (f);
}

Fixed Fixed::operator++(int)
{
    Fixed f;
    f.fixed_point = this->fixed_point++;
    return (f);
}

Fixed Fixed::operator--(int)
{
    Fixed f;
    f.fixed_point = this->fixed_point--;
    return (f);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.fixed_point < fixed2.fixed_point)
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.fixed_point >= fixed2.fixed_point)
		return (fixed1);
	else
		return (fixed2);
}