#include <iostream>
#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // test span in case of size is full
    try {
        sp.addNumber(1);
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    // test template addNumber function
    int spanSize = 20000;
    Span *superSpan = new Span(spanSize);
    superSpan->addNumber(99);
    std::vector<int> bloatedNumbers(spanSize - 1);
    for (int i = 0; i < spanSize - 1; i++) {
        bloatedNumbers[i] = i;
    }
    superSpan->addNumber(bloatedNumbers.begin(), bloatedNumbers.end());

    // test super span
    std::cout << "superSpan[" << 0 << "] = " << superSpan->getVec()[0] << std::endl;
    std::cout << "superSpan[" << spanSize - 1 << "] = " << superSpan->getVec()[spanSize - 1] << std::endl;

    delete superSpan;

    return 0;
}
