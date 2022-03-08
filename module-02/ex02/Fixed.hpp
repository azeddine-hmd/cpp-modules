/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:29 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 18:55:29 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include "utils.hpp"

class Fixed {
	int					mRaw;
	static const int	FRACTION;

public:
	Fixed( void );
	Fixed( Fixed const& copy );
	~Fixed( void );

    // argument constructors
    Fixed( int const intNbr );
    Fixed( float const floatNbr );

    // assignment operator
	Fixed&	operator=( Fixed const& rhs );

    bool    operator>( Fixed const& rhs );
    bool    operator<( Fixed const& rhs );
    bool    operator>=( Fixed const& rhs );
    bool    operator<=( Fixed const& rhs );
    bool    operator!=( Fixed const& rhs );
    bool    operator==( Fixed const& rhs );

    // arithmetic opertators
    Fixed& 	operator+( Fixed const& rhs);
    Fixed& 	operator-( Fixed const& rhs);
    Fixed& 	operator*( Fixed const& rhs);
    Fixed& 	operator/( Fixed const& rhs);

    // Pre/Post increment/decrement operators
    Fixed&  operator++( void );
    Fixed  operator++( int );
    Fixed&  operator--( void );
    Fixed  operator--( int );

    // public member functions
	int     getRawBits( void ) const;
    void    setRawBits( int raw );
    int     toInt( void ) const;
    float   toFloat( void ) const;
	int		getFraction( void ) const;

    // public static functions
    static Fixed&       min( Fixed& a, Fixed& b );
    static Fixed const& min( Fixed const& a, Fixed const& b );
    static Fixed&       max( Fixed& a, Fixed& b );
    static Fixed const& max( Fixed const& a, Fixed const& b );
};

std::ostream&	operator<<(std::ostream& out, Fixed const& obj);

#endif
