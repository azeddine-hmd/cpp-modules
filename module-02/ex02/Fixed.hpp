#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include "utils.hpp"

class Fixed {
	int					mRaw;
	static const int	mFracWidth;
public:
	Fixed( void );
	Fixed( Fixed const& copy );
    Fixed( int const integer );
    Fixed( float const floatNumber );
	~Fixed( void );
	Fixed&	operator=( Fixed const& other );
	int getFracWidth( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw);
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& curr);

#endif
