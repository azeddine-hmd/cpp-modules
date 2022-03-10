/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:28:51 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:28:51 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ): mType("AAnimal") {
	std::cout << "AAnimal: constructor called!" << std::endl;
}

AAnimal::AAnimal( AAnimal const& copy ) {
	*this = copy;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal: destructor called!" << std::endl;
}

AAnimal&	AAnimal::operator=( AAnimal const& rhs ) {
	mType = rhs.getType();

	return *this;
}

std::string const&	AAnimal::getType( void ) const {
	return mType;
}

void	AAnimal::setType( std::string const& type ) {
	mType = type;
}
