#include "Span.hpp"

Span::Span(): m_vec(std::vector<int>()), m_maxSize(0)  {}

Span::Span(unsigned int n): m_vec(std::vector<int>()), m_maxSize(n) {

}

Span::Span(Span const &copy) {
    *this = copy;
}

Span::~Span() {

}

Span &Span::operator=(Span const &rhs) {
    m_vec = rhs.m_vec;
    m_maxSize = rhs.m_maxSize;

    return *this;
}

void Span::addNumber(int value) {
    if (m_vec.size() == m_maxSize)
        throw FullSpanException();
    m_vec.push_back(value);
}

unsigned int Span::shortestSpan() const {
    if (m_vec.size() <= 1) throw NoSpanFoundException();

    std::vector<int> sortedVec = m_vec;
    std::sort(sortedVec.begin(), sortedVec.end());

    unsigned int shortestSpan = std::abs( *sortedVec.begin() - *(++sortedVec.begin()) );

    std::vector<int>::const_iterator current = sortedVec.begin();
    std::vector<int>::const_iterator next = ++( sortedVec.begin() );
    while (next != sortedVec.end()) {
        unsigned int span = std::abs(*next - *current);
        if (span < shortestSpan)
            shortestSpan = span;
        current++;
        next++;
    }

    return shortestSpan;
}

unsigned int Span::longestSpan() const {
    if (m_vec.size() <= 1) throw NoSpanFoundException();

    int minimum = *std::min_element(m_vec.begin(), m_vec.end());
    int maximum = *std::max_element(m_vec.begin(), m_vec.end());

    unsigned int longestSpan = std::abs(maximum - minimum);

    return longestSpan;
}

std::vector<int> const &Span::getVec() const {
    return m_vec;
}

char const *Span::FullSpanException::what() const throw() {
    return "FullSpanException: span size is full";
}

char const *Span::NoSpanFoundException::what() const throw() {
    return "NOSpanFoundException: no span can be found";
}
