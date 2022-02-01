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
	Fixed&	operator=( Fixed const& other );

	void setRaw( int const raw );
	int getRaw( void ) const ;
	int getFracWidth( void ) const;

	int getRawBits( void ) const;
    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& curr);

#endif
