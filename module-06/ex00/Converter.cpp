/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:25:03 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/10 19:25:03 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( void ) {
}

Converter::Converter( std::string const& value ) : mValue(value), mType(Invalid) {
	convertValue();
}

Converter::Converter( Converter const& copy ) {
	*this = copy;
}

Converter::~Converter( void ) {
}

Converter&	Converter::operator=(Converter const& rhs) {
	(void)rhs;

	return *this;
}

std::ostream&	operator<<( std::ostream& out, Converter const& obj ) {
	(void)obj;

	return out;
}

void			Converter::convertValue( void ) {
	std::stringstream result;

	if (mValue.length() == 1 && !std::isdigit(mValue[0]))
	{
		mType = Type::Char;
		mCharValue = mValue[0];
		return;
	}
}
