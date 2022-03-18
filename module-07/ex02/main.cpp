#include <iostream>
#include "Array.hpp"

template<typename T>
void printArray(Array<T> arr) {
    for (std::size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i];
        if (i != arr.size() - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}

int main() {

    // empty size array
    std::cout << "[empty array]" << std::endl;
    Array<int> emptyArray(0);
    try {
        emptyArray[0] = 1;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    // different size array
    std::cout << "[different size array]" << std::endl;
    Array<int> a(10);
    printArray(a);
    a[0] = 1;
    a[5] = 5;
    a[a.size() - 1] = 10;
    printArray(a);
    std::cout << std::endl;


    // complex array
    std::cout << "[complex array]" << std::endl;
    Array<std::string> s(2);
    s[0] = "hello";
    s[1] = "world";
    printArray(s);


    return 0;
}
