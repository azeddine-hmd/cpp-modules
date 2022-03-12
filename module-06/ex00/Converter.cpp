#include "Converter.hpp"

Converter::Converter() {}

Converter::~Converter() {}

Converter::Converter( std::string const &value ) : mValue(value), mType(InvalidType), mScalarValues() {
    mIsCharDisplayable = false;
    for (std::size_t i = 0; i < sizeof(mImpossible)/sizeof(mImpossible[0]); i++) {
        mImpossible[i] = false;
    }
    convert();
}

Converter::Converter( Converter const &copy ) {
	*this = copy;
}

Converter   &Converter::operator=(Converter const &rhs) {
    mValue = rhs.getValue();
    mType = rhs.getType();
    mScalarValues = rhs.getScalarValues();
    convert();

	return *this;
}

std::ostream&   operator<<( std::ostream& out, Converter const& obj ) {

	return out;
}

void Converter::convert() {
    parse();
    if (mType != InvalidType) {
        convertTypes();
    } else {
        mImpossible[InvalidType] = true;
    }
}

std::string const &Converter::getValue() const {
    return mValue;
}

void Converter::setValue(std::string const &value) {
    mValue = value;
}

Converter::Type Converter::getType() const {
    return mType;
}

void Converter::setType(Converter::Type type) {
    mType = type;
}

ScalarValues const &Converter::getScalarValues() const {
    return mScalarValues;
}

void Converter::setScalarValues(ScalarValues const &scalarValues) {
    mScalarValues = scalarValues;
}

bool const *Converter::getImpossible() const {
    return mImpossible;
}

bool Converter::isCharDisplayable() const {
    return mIsCharDisplayable;
}

void    Converter::parse() {
    std::stringstream ss;
    std::size_t i = 0;

    if (mValue.length() == 1 && !std::isdigit(mValue[0]))
    {
        mType = CharType;
        mScalarValues.setCharValue(mValue[0]);
        return;
    }
    if (mValue[0] == '+' || mValue[0] == '-') {
        ss << mValue[i++];
    }
    mType = IntType;
    for ( ; i < mValue.length(); i++) {
        if (mValue[i] == '.' && mType != DoubleType) {
            mType = DoubleType;
            ss << mValue[i];
        } else if (
                mValue[i] == 'e'
                && i < mValue.length() - 1
                && ( ((mValue[i + 1] == '-'  || mValue[i + 1] == '+') && i + 1 != mValue.length() - 1)
                || std::isdigit(mValue[i + 1]) )
        ) {
            ss << mValue[i] << mValue[i + 1];
            i++;
            mType = DoubleType;
        } else if (
                mValue[i] == 'f'
                && i == mValue.length() - 1
                && mType == DoubleType
        ) {
            mType = FloatType;
        } else if (!std::isdigit(mValue[i]))  {
            mType = InvalidType;
            break;
        } else {
            ss << mValue[i];
        }
    }

    if (mType == FloatType) {
        float tmp;
        ss >> tmp;
        mScalarValues.setFloatValue(tmp);
    } else if (mType == DoubleType) {
        double tmp;
        ss >> tmp;
        mScalarValues.setDoubleValue(tmp);
    } else if (mType == IntType) {
        long tmp;
        ss >> tmp;
        mScalarValues.setIntValue(tmp);
        if (ss.fail()
            || tmp > std::numeric_limits<int>::max()
            || tmp < std::numeric_limits<int>::min()
        ) {
            mType = InvalidType;
        }
    } else if (mType == InvalidType) {
        if (mValue == "inff" || mValue == "+inff" || mValue == "-inff" || mValue == "nanf") {
            mScalarValues.setFloatValue(atof(mValue.c_str()));
            mType = FloatType;
        } else if (mValue == "inf" || mValue == "+inf" || mValue == "-inf" || mValue == "nan") {
            mScalarValues.setDoubleValue(atof(mValue.c_str()));
            mType = DoubleType;
        }
    }

}

void Converter::convertTypes() {
    switch (mType) {
        case CharType:
            fromChar();
            break;
        case IntType:
            fromInt();
            break;
        case FloatType:
            fromFloat();
            break;
        case DoubleType:
            fromDouble();
            break;
    }
}

void Converter::fromChar() {
    char value = mScalarValues.getCharValue();
    mScalarValues.setIntValue( static_cast<int>(value) );
    mScalarValues.setFloatValue( static_cast<float>(value) );
    mScalarValues.setDoubleValue( static_cast<double>(value) );

    if (std::isprint(value)) {
        mIsCharDisplayable = true;
    }
}

void Converter::fromInt() {
    int value = mScalarValues.getIntValue();
    mScalarValues.setCharValue( static_cast<char>(value) );
    mScalarValues.setFloatValue( static_cast<float>(value) );
    mScalarValues.setDoubleValue( static_cast<double>(value) );

    if (value > std::numeric_limits<char>::max()
        || value < std::numeric_limits<char>::min()
    ) {
        mImpossible[CharType] = true;
    } else if (std::isprint(value)) {
        mIsCharDisplayable = true;
    }
}

void Converter::fromFloat() {
    float value = mScalarValues.getFloatValue();
    mScalarValues.setCharValue( static_cast<char>(value) );
    mScalarValues.setIntValue( static_cast<int>(value) );
    mScalarValues.setDoubleValue( static_cast<double>(value) );

    if (!isNumber(value)
        || value > static_cast<float>( std::numeric_limits<char>::max() )
        || value < static_cast<float>( std::numeric_limits<char>::min() )
    ) {
        mImpossible[CharType] = true;
    } else if (std::isprint(static_cast<char>(value))) {
        mIsCharDisplayable = true;
    }

    if (!isNumber(value)
        || value > static_cast<float>( std::numeric_limits<int>::max() )
        || value < static_cast<float>( std::numeric_limits<int>::min() )
    ) {
        mImpossible[IntType] = true;
    }
}

void Converter::fromDouble() {
    double value = mScalarValues.getDoubleValue();
    mScalarValues.setCharValue( static_cast<char>(value) );
    mScalarValues.setIntValue( static_cast<int>(value) );
    mScalarValues.setDoubleValue( static_cast<double>(value) );

    if (!isNumber(value)
        || value > std::numeric_limits<char>::max()
        || value < std::numeric_limits<char>::min()
    ) {
        mImpossible[CharType] = true;
    } else if (std::isprint(static_cast<char>(value))) {
        mIsCharDisplayable = true;
    }

    if (!isNumber(value)
        || value > std::numeric_limits<int>::max()
        || value < std::numeric_limits<int>::min()
    ) {
        mImpossible[IntType] = true;
    }

    if (value > std::numeric_limits<float>::max()
        || value < std::numeric_limits<float>::min()
    ) {
        mImpossible[DoubleType] = true;
    }
}

bool Converter::isNumber(float value) {
    return (!(std::isnan(value) || std::isinf(value)));
}

bool Converter::isNumber(double value) {
    return (!(std::isnan(value) || std::isinf(value)));
}

void Converter::printChar(std::ostream &out) const {
    if (mImpossible[InvalidType] || mImpossible[CharType]) {
        out << "char: impossible" << std::endl;
    } else if (mIsCharDisplayable) {
        out << "char: Non displayable" << std::endl;
    } else {
        out << "char: '" << mScalarValues.getCharValue() << "'" << std::endl;
    }
}

void Converter::printInt(std::ostream &out) const {
    if (mImpossible[InvalidType] || mImpossible[IntType]) {
        out << "int: impossible" << std::endl;
    } else {
        out << "int: " << mScalarValues.getIntValue() << std::endl;
    }
}

void Converter::printFloat(std::ostream &out) const {
    if (mImpossible[InvalidType] || mImpossible[FloatType]) {
        out << "float: impossible" << std::endl;
    } else if (isNumber(mScalarValues.getFloatValue())) {
        out << "float: " << mScalarValues.getFloatValue() << "f" << std::endl;
    } else {
        //TODO: test this case
        out << "float: " << mScalarValues.getFloatValue() << std::endl;
    }
}

void Converter::printDouble(std::ostream &out) const {
    if (mImpossible[InvalidType] || mImpossible[DoubleType]) {
        out << "double: impossible" << std::endl;
    } else if (isNumber(mScalarValues.getFloatValue())) {
        //TODO: test this case
        out << "double: " << mScalarValues.getFloatValue() << std::endl;
    }
}
