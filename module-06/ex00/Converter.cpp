#include <cstdlib>
#include "Converter.hpp"

Converter::Converter() {}

Converter::~Converter() {}

Converter::Converter( std::string const &value ) : mValue(value), mType(InvalidType), mScalarValues() {
    for (std::size_t i = 0; i < 4; i++) mStatus[i] = 0;

	parse();
    if (mType != InvalidType) {
        convertTypes()
    }
}

Converter::Converter( Converter const &copy ) {
	*this = copy;
}

Converter   &Converter::operator=(Converter const &rhs) {
    mValue = rhs.getValue();
    mType = rhs.getType();
    mScalarValues = rhs.getScalarValues();

	return *this;
}

std::ostream&   operator<<( std::ostream& out, Converter const& obj ) {
    //TODO

	return out;
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
}

void Converter::fromInt() {
    int value = mScalarValues.getIntValue();
    mScalarValues.setCharValue( static_cast<char>(value) );
    mScalarValues.setFloatValue( static_cast<float>(value) );
    mScalarValues.setDoubleValue( static_cast<double>(value) );
}

void Converter::fromFloat() {
    float value = mScalarValues.getFloatValue();
    mScalarValues.setCharValue( static_cast<char>(value) );
    mScalarValues.setIntValue( static_cast<int>(value) );
    mScalarValues.setDoubleValue( static_cast<double>(value) );
}
bool Interpreter::floatIsValue(void) const
{
    return (!(std::isnan(this->fvalue) || std::isinf(this->fvalue)));
}

bool Interpreter::doubleIsValue(void) const
{
    return (!(std::isnan(this->dvalue) || std::isinf(this->dvalue)));
}l