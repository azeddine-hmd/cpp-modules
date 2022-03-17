#include "Span.hpp"

Span::Span()  {}

Span::Span(unsigned int n): m_vec(0), m_curIndex(0) {
    m_vec = std::vector<int>(n);
}

Span::Span(Span const &copy): m_vec(0), m_curIndex(0) {
    *this = copy;
}

Span::~Span() {

}

Span &Span::operator=(Span const &rhs) {
    if (this != &rhs) {
        m_vec = rhs.m_vec;
        m_curIndex = rhs.m_curIndex;
    }

    return *this;
}

void Span::addNumber(int value) {
    if (m_curIndex == m_vec.size())
        throw FullSpanException();

    m_vec[m_curIndex] = value;
    m_curIndex++;
}

unsigned int Span::shortestSpan() const {
    if (m_vec.size() <= 1) throw NoSpanFoundException();

    int shortestSpan = std::abs(*m_vec.begin() - *(++m_vec.begin()));

    for(std::vector<int>::const_iterator iter = m_vec.begin(); iter != m_vec.end(); iter++) {
        for(std::vector<int>::const_iterator targetIter = m_vec.begin(); targetIter != m_vec.end(); targetIter++) {
            if (iter == targetIter)
                continue ;
            int span = std::abs(*iter - *targetIter);
            if (std::abs(span) < shortestSpan)
                shortestSpan = span;

        }
    }

    return shortestSpan;
}

unsigned int Span::longestSpan() const {
    if (m_vec.size() <= 1) throw NoSpanFoundException();

    int longestSpan = std::abs(*m_vec.begin() - *(++m_vec.begin()));

    for(std::vector<int>::const_iterator iter = m_vec.begin(); iter != m_vec.end(); iter++) {
        for(std::vector<int>::const_iterator targetIter = m_vec.begin(); targetIter != m_vec.end(); targetIter++) {
            if (iter == targetIter)
                continue ;
            int span = std::abs(*iter - *targetIter);
            if (span > longestSpan)
                longestSpan = span;
        }
    }

    return longestSpan;
}

char const *Span::FullSpanException::what() const throw() {
    return "FullSpanException: span size is full";
}

char const *Span::NoSpanFoundException::what() const throw() {
    return "NOSpanFoundException: no span can be found";
}
