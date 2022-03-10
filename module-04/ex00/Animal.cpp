/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:58:18 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 14:58:18 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): mType("Animal") {
	std::cout << "Animal: constructor called!" << std::endl;
}

Animal::Animal( Animal const& copy ) {
	*this = copy;
}

Animal::~Animal( void ) {
	std::cout << "Animal: destructor called!" << std::endl;
}

Animal&	Animal::operator=( Animal const& rhs ) {
	mType = rhs.getType();

	return *this;
}

std::string const&	Animal::getType( void ) const {
	return mType;
}

void	Animal::setType( std::string const& type ) {
	mType = type;
}

void	Animal::makeSound( void ) const {
	std::cout << "the animal sound!" << std::endl;
}
