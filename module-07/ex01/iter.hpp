#pragma once

#include <iostream>

template<typename T>
void iter(T *arr, std::size_t length, void (*f)(T const &)) {
    for (std::size_t i = 0; i < length; i++) {
        (*f)(arr[i]);
    }
}

template<typename T>
void printElement(T const &element) {
    std::cout << element << " ";
}
