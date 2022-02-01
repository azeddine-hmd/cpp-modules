#include "Fixed.hpp"

const int Fixed::mFracWidth = 8;

Fixed::Fixed( void ): mRaw(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& copy ) {
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( int const intNbr ): mRaw(0) {
    std::cout << "Int constructor called " << std::endl;
    mRaw = intNbr<<mFracWidth;
}

Fixed::Fixed( float const floatNbr ): mRaw(0) {
    std::cout << "Float constructor called " << std::endl;

    mRaw = (int) roundf( floatNbr * (1<<mFracWidth) );
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=( Fixed const& other ) {
    std::cout << "Assignation operator called" << std::endl;
    mRaw = other.getRaw();

	return *this;
}

int Fixed::getFracWidth( void ) const {
    return mFracWidth;
}

void Fixed::setRaw(const int raw) {
    mRaw = raw;
}

int Fixed::getRaw( void ) const {
    return mRaw;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;

    return mRaw;
}

int Fixed::toInt( void ) const {
    return mRaw>>mFracWidth;
}

float Fixed::toFloat( void ) const {
    return (float) mRaw / (float) (1<<mFracWidth);
}

std::ostream& operator<<(std::ostream& out, Fixed const& curr) {
    out << curr.toFloat();

    return out;
}
