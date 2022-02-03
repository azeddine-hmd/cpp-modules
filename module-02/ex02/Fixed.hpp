#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include "utils.hpp"

class Fixed {
	int					mRaw;
	static const int	FRACTION;

    int getRawFromFloat( float floatNbr );
    int getRawFromInt( int intNbr );
public:
	Fixed( void );
	Fixed( Fixed const& copy );
    Fixed( int const intNbr );
    Fixed( float const floatNbr );
	~Fixed( void );

    // operator overloading
	Fixed&	operator=( Fixed const& rhs );

    bool    operator>( Fixed const& rhs );
    bool    operator<( Fixed const& rhs );
    bool    operator>=( Fixed const& rhs );
    bool    operator<=( Fixed const& rhs );
    bool    operator!=( Fixed const& rhs );
    bool    operator==( Fixed const& rhs );

    Fixed   operator+( Fixed const& rhs);
    Fixed   operator-( Fixed const& rhs);
    Fixed   operator*( Fixed const& rhs);
    Fixed   operator/( Fixed const& rhs);

    Fixed   operator++( void );
    Fixed   operator++( int );
    Fixed   operator--( void );
    Fixed   operator--( int );

    // member functions
	int     getRawBits( void ) const;
    void    setRawBits( int raw );
    int     toInt( void ) const;
    float   toFloat( void ) const;

    // static functions
    static Fixed&       min( Fixed& a, Fixed& b );
    static Fixed const& min( Fixed const& a, Fixed const& b );
    static Fixed&       max( Fixed& a, Fixed& b );
    static Fixed const& max( Fixed const& a, Fixed const& b );
};

std::ostream& operator<<(std::ostream& out, Fixed const& obj);

#endif
