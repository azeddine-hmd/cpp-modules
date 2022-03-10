/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:00:03 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:00:03 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat: default constructor called!" << std::endl;
	mType = "Cat";
}

Cat::~Cat( void ) {
	std::cout << "Cat: destrcutor called!" << std::endl;
}

Cat::Cat( Cat const& copy ) {
	*this = copy;
}

Cat&	Cat::operator=(const Cat &rhs) {
	Animal::operator=(rhs);

	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "the cat sound!" << std::endl;
}
