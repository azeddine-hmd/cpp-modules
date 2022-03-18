#include <iostream>
#include "MutantStack.hpp"
#include <list>
#include <vector>

# define CONT MutantStack
# define PUSH push
# define TOP top
# define POP pop

//# define CONT std::list
//# define PUSH push_back
//# define TOP  back
//# define POP pop_back

//# define CONT std::vector
//# define PUSH push_back
//# define TOP  back
//# define POP pop_back


int main() {
    CONT<int> mstack;
    mstack.PUSH(5);
    mstack.PUSH(17);
    std::cout << mstack.TOP() << std::endl;
    mstack.POP();
    std::cout << mstack.size() << std::endl;
    mstack.PUSH(3);
    mstack.PUSH(5);
    mstack.PUSH(737);
    mstack.PUSH(0);
    CONT<int>::iterator it = mstack.begin();
    CONT<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    CONT<int> s(mstack);

    // reverse iteration
    std::cout << std::endl << "my tests:" << std::endl;
    for (CONT<int>::reverse_iterator riter = mstack.rbegin(); riter != mstack.rend(); riter++) {
        std::cout << *riter << std::endl;
    }

    return 0;
}
