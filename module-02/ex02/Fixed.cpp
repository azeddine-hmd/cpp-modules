/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:27 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 18:55:27 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
*   static variables
*/

const int Fixed::FRACTION = 8;

/*
*   constructor(default/copy) and destructor
*/

Fixed::Fixed( void ): mRaw(0) {}

Fixed::Fixed( Fixed const& copy ) {
	*this = copy;
}

Fixed::~Fixed( void ) {}


/*
*   argument constructors
*/

Fixed::Fixed( int const intNbr ): mRaw(0) {
    mRaw = intNbr<<Fixed::FRACTION;
}

Fixed::Fixed( float const floatNbr ): mRaw(0) {
    mRaw = (int) roundf( floatNbr * (1<<Fixed::FRACTION) );
}

/*
*   operator overloading
*/

Fixed&	Fixed::operator=( Fixed const& rhs ) {
    mRaw = rhs.getRawBits();

	return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const& obj ) {
    out << obj.toFloat();

    return out;
}

bool    Fixed::operator>( Fixed const& rhs ) {
    return ( mRaw > rhs.getRawBits() );
}

bool    Fixed::operator<( Fixed const& rhs ) {
    return ( mRaw < rhs.getRawBits() );
}

bool    Fixed::operator>=( Fixed const& rhs ) {
    return ( mRaw >= rhs.getRawBits() ) ? true : false;
}

bool    Fixed::operator<=( Fixed const& rhs ) {
    return ( mRaw <= rhs.getRawBits() ) ? true : false;
}

bool    Fixed::operator!=( Fixed const& rhs ) {
    return ( mRaw != rhs.getRawBits() ) ? true : false;
}

bool    Fixed::operator==( Fixed const& rhs ) {
    return ( mRaw == rhs.getRawBits() ) ? true : false;
}

Fixed&   Fixed::operator+( Fixed const& rhs) {
    mRaw = mRaw + rhs.getRawBits();

    return *this;
}

Fixed&   Fixed::operator-( Fixed const& rhs) {
    mRaw = mRaw - rhs.getRawBits();

    return *this;
}

Fixed&  Fixed::operator*( Fixed const& rhs) {
    mRaw = ( (long)mRaw * (long)rhs.getRawBits() ) / (1<<Fixed::FRACTION);

    return *this;
}

Fixed&   Fixed::operator/( Fixed const& rhs) {
    mRaw = ( (long)mRaw * (1<<Fixed::FRACTION) ) / rhs.getRawBits();

    return *this;
}

Fixed&   Fixed::operator++( void ) {
    mRaw++;

    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp(*this);
    operator++();

    return tmp;
}

Fixed&   Fixed::operator--( void ) {
    mRaw--;

    return *this;
}

Fixed   Fixed::operator--( int ) {
    Fixed tmp(*this);
    operator--();

    return tmp;
}

/*
*   static functions
*/

Fixed&          Fixed::min( Fixed& a, Fixed& b ) {
    if (a > b)
        return b;
    return a;
}

Fixed&          Fixed::max( Fixed& a, Fixed& b ) {
    if (a < b)
        return a;
    return b;
}

Fixed const&    Fixed::min( Fixed const& a, Fixed const& b ) {
    if (a.getRawBits() > b.getRawBits())
        return b;
    return a;
}

Fixed const&    Fixed::max( Fixed const& a, Fixed const& b ) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

/*
*   public member functions
*/

int Fixed::getRawBits( void ) const {
    return mRaw;
}

void Fixed::setRawBits( int raw )  {
    mRaw = raw;
}

int Fixed::toInt( void ) const {
    return mRaw>>Fixed::FRACTION;
}

float Fixed::toFloat( void ) const {
    return (float)mRaw / (float)(1<<Fixed::FRACTION);
}

int		Fixed::getFraction( void ) const {
	return Fixed::FRACTION;
}
