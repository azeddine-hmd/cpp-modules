/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:43:57 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 14:43:57 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::mFracWidth = 8;

Fixed::Fixed( void ): mRaw(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& copy ) {
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=( Fixed const& other ) {
    std::cout << "Assignation operator called" << std::endl;
    mRaw = other.getRawBits();

	return *this;
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
