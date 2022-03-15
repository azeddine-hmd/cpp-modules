#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);

    std::cout << easyfind(vector, 3) << std::endl;
    std::cout << easyfind(vector, 4) << std::endl;
    std::cout << easyfind(vector, 10) << std::endl;

    std::set<int> set;
    set.insert(12);
    set.insert(20);
    set.insert(33);
    set.insert(111);


    return 0;
}