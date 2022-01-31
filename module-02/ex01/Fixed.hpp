#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	int					mRaw;
	static const int	mFracWidth;
public:
	Fixed( void );
	Fixed( Fixed const& copy );
	~Fixed( void );
	Fixed&	operator=( Fixed const& other );
	int getFracWidth( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw);
};

#endif
