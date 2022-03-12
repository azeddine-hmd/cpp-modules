#pragma once

#include <iostream>
#include <sstream>

class Values {
    char mCharValue;
    int mIntValue;
    float mFloatValue;
    double mDoubleValue;
public:
    Values();

    ~Values();

    Values( Values const& copy );

    Values& operator=( Values const& rhs );

    char getCharValue() const;

    void setCharValue(char charValue);

    int getIntValue() const;

    void setIntValue(int intValue);

    float getFloatValue() const;

    void setFloatValue(float floatValue);

    double getDoubleValue() const;

    void setDoubleValue(double doubleValue);
};

std::ostream &operator<<(std::ostream &out, Values &obj);