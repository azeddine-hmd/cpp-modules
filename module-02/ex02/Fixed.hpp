#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include "utils.hpp"

class Fixed {
	int					mRaw;
	static const int	mFracWidth;
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
    Fixed   operator--( void );

    // getters and setters
	void setRaw( int const raw );
	int getRaw( void ) const ;
	int getFracWidth( void ) const;

    // member function
	int getRawBits( void ) const;
    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& obj);

#endif
