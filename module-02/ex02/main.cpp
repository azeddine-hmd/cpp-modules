/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:22 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 18:55:22 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed		a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

	std::cout << "max(" << a << "," << b << ") is " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(" << b << "," << a << ") is " << Fixed::min( b, a ) << std::endl;

	Fixed c(100.0f);
	Fixed d(2.0f);

	std::cout << c / d << std::endl;

    return 0;
}
