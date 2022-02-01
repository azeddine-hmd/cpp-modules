#include "Fixed.hpp"

const int Fixed::mFracWidth = 8;

/*
*   Constructors
*/

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

/*
*   Operator overloading
*/

Fixed&	Fixed::operator=( Fixed const& rhs ) {
    std::cout << "Assignation operator called" << std::endl;
    mRaw = rhs.getRaw();

	return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const& obj ) {
    out << obj.toFloat();

    return out;
}

bool    Fixed::operator>( Fixed const& rhs ) {
    return ( this->toFloat() > rhs.toFloat() ) ? true : false;
}

bool    Fixed::operator<( Fixed const& rhs ) {
    return ( this->toFloat() < rhs.toFloat() ) ? true : false;
}

bool    Fixed::operator>=( Fixed const& rhs ) {
    return ( this->toFloat() >= rhs.toFloat() ) ? true : false;
}

bool    Fixed::operator<=( Fixed const& rhs ) {
    return ( this->toFloat() <= rhs.toFloat() ) ? true : false;
}

bool    Fixed::operator!=( Fixed const& rhs ) {
    return ( this->toFloat() != rhs.toFloat() ) ? true : false;
}

bool    Fixed::operator==( Fixed const& rhs ) {
    return ( this->toFloat() == rhs.toFloat() ) ? true : false;
}

Fixed   Fixed::operator+( Fixed const& rhs) {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator-( Fixed const& rhs) {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator*( Fixed const& rhs) {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/( Fixed const& rhs) {
    return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed   Fixed::operator++( void ) {
    return Fixed(this->toFloat() + 1);
}

Fixed   Fixed::operator--( void ) {
    return Fixed(this->toFloat() - 1);
}

/*
*   Getters and Setters
*/

void Fixed::setRaw(const int raw) {
    mRaw = raw;
}

int Fixed::getRaw( void ) const {
    return mRaw;
}

int Fixed::getFracWidth( void ) const {
    return mFracWidth;
}

/*
*   Public Member Functions
*/

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
