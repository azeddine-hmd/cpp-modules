#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <iomanip>
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
    bool			mImpossible[5];
private:
    bool            mIsCharDisplayable;

    Converter();

    void convert();

	void parse();

    void convertTypes();

    void fromChar();

    void fromInt();

    void fromFloat();

    void fromDouble();

    bool isNumber(float value) const;

    bool isNumber(double value) const;

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

    bool const *getImpossible() const;

    bool isCharDisplayable() const;

    void printChar(std::ostream &out) const;

    void printInt(std::ostream &out) const;

    void printFloat(std::ostream &out) const;

    void printDouble(std::ostream &out) const;
};

std::ostream&	operator<<( std::ostream& out, Converter const& obj );
