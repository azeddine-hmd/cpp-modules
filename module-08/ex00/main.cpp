#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);

    std::cout << easyfind(vector, 3) << std::endl;
    std::cout << easyfind(vector, 4) << std::endl;
    std::cout << easyfind(vector, 10) << std::endl;

    return 0;
}