/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:20:15 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:20:15 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog: default constructor called!" << std::endl;
	mType = "Dog";
}

Dog::~Dog( void ) {
	std::cout << "Dog: destructor called!" << std::endl;
}

Dog::Dog( Dog  const& copy ) {
	*this = copy;
}

Dog&	Dog::operator=(const Dog &rhs) {
	Animal::operator=(rhs);

	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "the dog sound!" << std::endl;
}
