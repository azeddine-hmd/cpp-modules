#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

class Base {
public:
    virtual ~Base() {}
};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate() {
    Base *base = NULL;

    std::srand(std::time(NULL));
    int choice = std::rand() % 3;

    switch (choice) {
        case 0:
            base = new A();
            break;
        case 1:
            base = new B();
            break;
        case 2:
            base = new C();
            break;
    }

    return base;
}

void identify(Base *p) {
    std::cout << "using pointer, the type is: ";
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "unknown" << std::endl;
    }
}

void identify(Base &p) {
    std::cout << "using reference, the type is: ";

    try {
        A& result = dynamic_cast<A&>(p);
        (void)result;
        std::cout << "A" << std::endl;
    } catch (std::bad_cast &e) {

        try {
            B& result = dynamic_cast<B&>(p);
            (void)result;
            std::cout << "B" << std::endl;
        } catch (std::bad_cast &e) {

            try {
                C& result = dynamic_cast<C&>(p);
                (void)result;
                std::cout << "C" << std::endl;
            } catch (std::bad_cast &e) {
                std::cout << "unknown" << std::endl;
            }

        }

    }
}

int main() {
    Base *b = generate();
    if (!b)
        std::cout << "unexpected type have been created!" << std::endl;
    identify(b);
    identify(*b);
    return 0;
}

