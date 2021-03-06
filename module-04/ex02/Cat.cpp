/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:14:55 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 17:14:55 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )  {
	std::cout << "Cat: default constructor called!" << std::endl;

	mType = "Cat";
	mBrain = new Brain();
}

Cat::~Cat( void ) {
	std::cout << "Cat: destrcutor called!" << std::endl;
	delete mBrain;
}

Cat::Cat( Cat const& copy ) {
	mBrain = new Brain();
	*this = copy;
}

Cat&	Cat::operator=(Cat const& rhs) {
	mType = rhs.getType();
	*mBrain = rhs.getBrain();

	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "the cat sound!" << std::endl;
}

Brain const&	Cat::getBrain( void ) const {
	return *mBrain;
}
