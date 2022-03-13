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
    obj.printChar(out);
    obj.printInt(out);
    obj.printFloat(out);
    obj.printDouble(out);

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
        if (mValue == "inff" || mValue == "+inff") {
            mScalarValues.setFloatValue(std::numeric_limits<float>::infinity());
            mType = FloatType;
        } else if (mValue == "-inff") {
            mScalarValues.setFloatValue(-std::numeric_limits<float>::infinity());
            mType = FloatType;
        } else if (mValue == "nanf") {
            mScalarValues.setFloatValue(NAN);
            mType = FloatType;
        } else if (mValue == "inf" || mValue == "+inf") {
            mScalarValues.setDoubleValue(std::numeric_limits<float>::infinity());
            mType = DoubleType;
        } else if (mValue == "-inf") {
            mScalarValues.setDoubleValue(-std::numeric_limits<float>::infinity());
            mType = DoubleType;
        } else if (mValue == "nan") {
            mScalarValues.setDoubleValue(NAN);
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
        case InvalidType:
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
    mScalarValues.setFloatValue( static_cast<float>(value) );

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

    if (value > static_cast<double>( std::numeric_limits<float>::max() )
        || value < static_cast<double>( -std::numeric_limits<float>::max() )
    ) {
        mImpossible[FloatType] = true;
    }
}

bool Converter::isNumber(float value) const {
    return (!(std::isnan(value) || std::isinf(value)));
}

bool Converter::isNumber(double value) const {
    return (!(std::isnan(value) || std::isinf(value)));
}

void Converter::printChar(std::ostream &out) const {
    if (mImpossible[InvalidType] || mImpossible[CharType]) {
        out << "char: impossible" << std::endl;
    } else if (!mIsCharDisplayable) {
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
    float fraction = std::modf(mScalarValues.getFloatValue(), NULL);

    if (mImpossible[InvalidType] || mImpossible[FloatType]) {
        out << "float: impossible" << std::endl;
    } else if (isNumber(mScalarValues.getFloatValue()) &&  fraction == 0.0f) {
        out << "float: " << mScalarValues.getFloatValue() << ".0f" << std::endl;
    }  else {
        out << "float: " << mScalarValues.getFloatValue() << "f" << std::endl;
    }
}

void Converter::printDouble(std::ostream &out) const {
    double fraction = std::modf(mScalarValues.getDoubleValue(), NULL);

    if (mImpossible[InvalidType] || mImpossible[DoubleType]) {
        out << "double: impossible" << std::endl;
    } else if (isNumber(mScalarValues.getDoubleValue()) &&  fraction == 0.0f) {
        out << "double: " << mScalarValues.getDoubleValue() << ".0" << std::endl;
    } else {
        out << "double: " << mScalarValues.getDoubleValue() << std::endl;
    }
}
