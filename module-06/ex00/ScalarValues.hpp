#pragma once

#include <iostream>
#include <sstream>

class ScalarValues {
    char mCharValue;
    int mIntValue;
    float mFloatValue;
    double mDoubleValue;
public:
    ScalarValues();

    ~ScalarValues();

    ScalarValues(ScalarValues const& copy );

    ScalarValues& operator=(ScalarValues const& rhs );

    char getCharValue() const;

    void setCharValue(char charValue);

    int getIntValue() const;

    void setIntValue(int intValue);

    float getFloatValue() const;

    void setFloatValue(float floatValue);

    double getDoubleValue() const;

    void setDoubleValue(double doubleValue);
};

std::ostream &operator<<(std::ostream &out, ScalarValues const &obj);