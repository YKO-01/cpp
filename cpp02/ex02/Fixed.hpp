/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:59:59 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/09 18:08:02 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private :
		int fixed_point;
		static const int fract;
	public :
		Fixed();
		Fixed(const int fixed_point);
		Fixed(const float fixed_point);
		Fixed(const Fixed& copy);
		~Fixed();
		int		getRawBits (void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const ;
		int		toInt(void) const;	
		Fixed& operator = (const Fixed& copy);
		// arithmetic opreators
		Fixed operator + (const Fixed& fixed) const;
		Fixed operator - (const Fixed& fixed) const;
		Fixed operator * (const Fixed& fixed) const;
		Fixed operator / (const Fixed& fixed) const;
		// increment & decrement operators
		Fixed operator ++ ();
		Fixed operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);
		Fixed& min(Fixed& fixed1, Fixed& fixed2);
		Fixed& max(Fixed& fixed1, Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
};


std::ostream& operator << (std::ostream& out, const Fixed& fixed);

#endif
