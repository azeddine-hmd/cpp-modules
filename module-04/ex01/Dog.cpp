/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:27:07 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:27:07 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog: default constructor called!" << std::endl;
	mType = "Dog";
	mBrain = new Brain();
}

Dog::~Dog( void ) {
	std::cout << "Dog: destructor called!" << std::endl;
	delete mBrain;
}

Dog::Dog( Dog const& copy ) {
	mBrain = new Brain();
	*this = copy;
}

Dog&	Dog::operator=(const Dog &rhs) {
	mType = rhs.getType();
	*mBrain = rhs.getBrain();

	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "the dog sound!" << std::endl;
}

Brain const&	Dog::getBrain( void ) const {
	return *mBrain;
}
