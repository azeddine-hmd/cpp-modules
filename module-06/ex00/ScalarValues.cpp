#include "ScalarValues.hpp"

ScalarValues::ScalarValues() : mCharValue(0), mIntValue(0), mFloatValue(0), mDoubleValue(0) {}

ScalarValues::~ScalarValues()  {}

ScalarValues::ScalarValues(ScalarValues const &copy) {
    *this = copy;
}

ScalarValues &ScalarValues::operator=(ScalarValues const &rhs) {
    mCharValue = rhs.getCharValue();
    mIntValue = rhs.getIntValue();
    mFloatValue = rhs.getFloatValue();
    mDoubleValue = rhs.getDoubleValue();

    return *this;
}

std::ostream &operator<<(std::ostream &out, ScalarValues const &obj) {
    std::cout \
    << "CharValue: " << obj.getCharValue() << std::endl \
    << "IntValue: " << obj.getIntValue() << std::endl \
    << "FLoatValue" << obj.getFloatValue() << std::endl \
    << "DoubleValue" << obj.getDoubleValue() << std::endl;

    return out;
}

char ScalarValues::getCharValue() const {
    return mCharValue;
}

void ScalarValues::setCharValue(char charValue) {
    mCharValue = charValue;
}

int ScalarValues::getIntValue() const {
    return mIntValue;
}

void ScalarValues::setIntValue(int intValue) {
    mIntValue = intValue;
}

float ScalarValues::getFloatValue() const {
    return mFloatValue;
}

void ScalarValues::setFloatValue(float floatValue) {
    mFloatValue = floatValue;
}

double ScalarValues::getDoubleValue() const {
    return mDoubleValue;
}

void ScalarValues::setDoubleValue(double doubleValue) {
    mDoubleValue = doubleValue;
}
