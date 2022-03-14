#pragma once

#include <string>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

uintptr_t serialize(Data *ptr);

Data *deserialize(uintptr_t raw);
