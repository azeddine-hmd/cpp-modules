#include "Fixed.hpp"

const int Fixed::mFracWidth = 8;

Fixed::Fixed( void ): mRaw(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& copy ) {
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( int const integer ): mRaw(0) {
    mRaw = integer<<mFracWidth;
}

Fixed::Fixed( float const floatNumber ): mRaw(0) {
    //TODO: implement
    (void)floatNumber;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=( Fixed const& other ) {
    std::cout << "Assignation operator called" << std::endl;
    mRaw = other.getRawBits();

	return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const& curr) {
    std::cout << "raw bits: " << std::endl;
    printBits(curr.getRawBits());

    return out;
}

int Fixed::getFracWidth( void ) const {
    return mFracWidth;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return mRaw;
}

void Fixed::setRawBits(const int raw) {
    mRaw = raw;
}

int Fixed::toInt( void ) const {
    //TODO: implement
    return mRaw>>mFracWidth;
}
