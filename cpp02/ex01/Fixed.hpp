/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:03:42 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/27 13:31:22 by ayakoubi         ###   ########.fr       */
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
		Fixed(const int IntNbr);
		Fixed(const float FloatNbr);
		Fixed(const Fixed& copy);
		~Fixed();
		int		getRawBits (void);
		void	setRawBits(int const raw);
		float	toFloat(void) const ;
		int		toInt(void) const;	
		Fixed& operator = (const Fixed& copy);
		friend std::ostream& operator << (std::ostream& out, const Fixed& fixed);
};
	

#endif
