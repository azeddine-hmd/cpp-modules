/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:00:02 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 20:00:02 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::Weapon( Weapon const& copy ): mType(copy.getType()) {}

Weapon::Weapon( std::string const& type ): mType(type) {}

Weapon::~Weapon( void ) {}

std::string const&	Weapon::getType( void ) const {
	return mType;
}

void	Weapon::setType( std::string const& type) {
	mType = type;
}

Weapon&	Weapon::operator=( Weapon const& other ) {
	mType = other.getType();

	return *this;
}

std::ostream&	operator<<( std::ostream& out, Weapon const& weapon ) {
	out << weapon.getType();

	return out;
}
