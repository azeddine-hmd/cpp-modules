#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include "ScalarValues.hpp"

class Converter {
	typedef enum Type {
		InvalidType,
		CharType,
        IntType,
        FloatType,
        DoubleType,
	} Type;

	std::string     mValue;
    Type		    mType;
    ScalarValues    mScalarValues;
    int			    mStatus[4];

    Converter();

	void parse();

    void convertTypes();

    void fromChar();

    void fromInt();

    void fromFloat();

    void fromDouble();

public:

	Converter( std::string const& value );

	Converter( Converter const& copy );

	~Converter();

	Converter&	operator=( Converter const& rhs );

    std::string const &getValue() const;

    void setValue(std::string const &value);

    Type getType() const;

    void setType(Type type);

    ScalarValues const &getScalarValues() const;

    void setScalarValues(ScalarValues const &scalarValues);

    ScalarValues const &getValues() const;
};

std::ostream&	operator<<( std::ostream& out, Converter const& obj );
