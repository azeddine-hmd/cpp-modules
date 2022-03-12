#include "Values.hpp"

Values::Values() {}

Values::~Values()  {}

Values::Values(Values const &copy) {
    *this = copy;
}

Values &Values::operator=(Values const &rhs) {
    mCharValue = rhs.getCharValue();
    mIntValue = rhs.getIntValue();
    mFloatValue = rhs.getFloatValue();
    mDoubleValue = rhs.getDoubleValue();

    return *this;
}

std::ostream &operator<<(std::ostream &out, Values &obj) {
    std::cout \
    << "CharValue: " << obj.getCharValue() << std::endl \
    << "IntValue: " << obj.getIntValue() << std::endl \
    << "FLoatValue" << obj.getFloatValue() << std::endl \
    << "DoubleValue" << obj.getDoubleValue() << std::endl;

    return out;
}

char Values::getCharValue() const {
    return mCharValue;
}

void Values::setCharValue(char charValue) {
    mCharValue = charValue;
}

int Values::getIntValue() const {
    return mIntValue;
}

void Values::setIntValue(int intValue) {
    mIntValue = intValue;
}

float Values::getFloatValue() const {
    return mFloatValue;
}

void Values::setFloatValue(float floatValue) {
    mFloatValue = floatValue;
}

double Values::getDoubleValue() const {
    return mDoubleValue;
}

void Values::setDoubleValue(double doubleValue) {
    mDoubleValue = doubleValue;
}
