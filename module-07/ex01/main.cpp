#include <iostream>

template<typename T>
void    swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T   &max(T &a, T &b) {
    return (a > b) ? a : b;
}

template<typename T>
T   &min(T &a, T &b) {
    return (a < b) ? a : b;
}

int main() {
    int a = 1;
    int b = 2;

    std::cout << "before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "after swap: a = " << a << ", b = " << b << std::endl;

    std::cout << "max(" << a << "," << b << ") = " << max(a, b) << std::endl;

    std::cout << "min(" << a << "," << b << ") = " << min(a, b) << std::endl;

    return 0;
}
