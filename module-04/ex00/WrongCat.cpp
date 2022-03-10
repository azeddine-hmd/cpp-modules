/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:20:49 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:20:49 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat: default constructor called!" << std::endl;
	mType = "WrongCat";
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat: destrcutor called!" << std::endl;
}

WrongCat::WrongCat( WrongCat const& copy ) {
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs) {
	WrongAnimal::operator=(rhs);

	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "the wrong-cat sound!" << std::endl;
}
