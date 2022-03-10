/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:17:33 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/10 19:17:33 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>


class Converter {
	typedef enum Type {
		Invalid,
		Char,
	} Type;

	std::string mValue;
	Type		mType;
	int			mStatus[4];

	// Values
	char mCharValue;
	int mIntValue;
	float mFloatValue;
	double mDoubleValue;

	Converter( void );
	void convertValue( void );
public:
	Converter( std::string const& value );
	Converter( Converter const& copy );
	~Converter( void );

	Converter&	operator=( Converter const& rhs );

};

std::ostream&	operator<<( std::ostream& out, Converter const& obj );
