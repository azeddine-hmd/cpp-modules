#include "iter.hpp"

int main() {
    int intArr[3] = {1, 2 ,3};
    iter(intArr, 3, &printElement);

    std::cout << std::endl;

    float floatArr[3] = {100.0f, 101.0f, 102.0f};
    iter(floatArr, 3, &printElement);

    std::cout << std::endl;

    std::string names[3] = {"luck", "james", "john"};
    iter(names, 3, &printElement);

    return 0;
}
