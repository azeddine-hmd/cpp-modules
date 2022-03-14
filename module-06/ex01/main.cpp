#include <iostream>
#include "Data.hpp"

int main() {
    Data *data = new Data();
    data->s1 = "first string";
    data->n = 666;
    data->s2 = "second string";

    std::cout << "before serializing:" << std::endl;
    std::cout << "data->s1 = " << data->s1 << std::endl;
    std::cout << "data->n = " << data->n << std::endl;
    std::cout << "data->s2 = " << data->s2 << std::endl;

    uintptr_t raw = serialize(data);
    Data * newData = deserialize(raw);

    std::cout << std::endl;
    std::cout << "after deserializing:" << std::endl;
    std::cout << "data->s1 = " << newData->s1 << std::endl;
    std::cout << "data->n = " << newData->n << std::endl;
    std::cout << "data->s2 = " << newData->s2 << std::endl;

    delete data;

    return 0;
}
