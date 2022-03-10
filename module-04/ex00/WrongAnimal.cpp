/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:20:30 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:20:30 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal: constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal: destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const& copy ) {
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs) {
	mType = rhs.getType();

	return *this;
}

std::string const&	WrongAnimal::getType( void ) const {
	return mType;
}

void	WrongAnimal::setType( std::string const& type ) {
	mType = type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "the wrong-animal sound!" << std::endl;
}
