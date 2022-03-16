#include "Span.hpp"

Span::Span()  {}

Span::Span(unsigned int n): m_arr(NULL), m_size(n), m_curIndex(0) {
    m_arr = new int[n]();
}

Span::Span(Span const &copy): m_arr(NULL), m_size(0), m_curIndex(0) {
    *this = copy;
}

Span::~Span() {
    delete[] m_arr;
}

Span &Span::operator=(Span const &rhs) {
    if (this != &rhs) {
        delete[] m_arr;
        m_size = rhs.size();
        m_curIndex = rhs.getCurIndex();
        m_arr = new int[m_size]();
    }

    return *this;
}

void Span::addNumber(int value) {
    if (m_curIndex == m_size)
        throw SpanFullException();

    m_arr[m_curIndex] = value;
    m_curIndex++;
}

unsigned int Span::size() const {
    return m_size;
}

unsigned int Span::getCurIndex() const {
    return m_curIndex;
}

char const *Span::SpanFullException::what() const throw() {
    return "span size is full";
}
