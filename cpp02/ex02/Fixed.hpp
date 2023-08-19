/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:59:59 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/17 11:31:42 by ayakoubi         ###   ########.fr       */
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
		static const int raw;
	public :
		Fixed();
		Fixed(const int fixed_point);
		Fixed(const float fixed_point);
		Fixed(const Fixed& copy);
		~Fixed();
		int		getRawBits (void);
		void	setRawBits(int const raw);
		float	toFloat(void) const ;
		int		toInt(void) const;	
		Fixed& operator = (const Fixed& copy);
		friend std::ostream& operator << (std::ostream& out, const Fixed& fixed);
		// arithmetic opreators
		Fixed operator + (const Fixed& fixed);
		Fixed operator - (const Fixed& fixed);
		Fixed operator * (const Fixed& fixed);
		Fixed operator / (const Fixed& fixed);
		// increment & decrement operators
		Fixed operator ++ ();
		Fixed operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);
};



#endif
