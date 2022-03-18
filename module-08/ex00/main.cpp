#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);

    std::cout << easyFind(vector, 3) << std::endl;
    std::cout << easyFind(vector, 4) << std::endl;
    std::cout << (easyFind(vector, 10) == -1 ? "error" : "not an error") << std::endl;
    std::cout << std::endl;

    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);

    std::cout << easyFind(vector, 1) << std::endl;
    std::cout << easyFind(vector, 4) << std::endl;
    std::cout << (easyFind(vector, 10) == -1 ? "error" : "not an error") << std::endl;

    return 0;
}