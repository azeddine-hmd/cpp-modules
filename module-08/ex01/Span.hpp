#pragma once

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <limits>

class Span {
    std::vector<int>    m_vec;
    unsigned int        m_curIndex;

    Span();

public:
    Span(unsigned int n);

    Span(Span const &copy);

    ~Span();

    Span &operator=(Span const &rhs);

    void addNumber(int value);

    template<typename InputIterator>
    void addNumber(InputIterator begin, InputIterator end);

    unsigned int shortestSpan() const;

    unsigned int longestSpan() const;

    std::vector<int> const &getVec() const;

    class FullSpanException : public std::exception {
    public:
        virtual char const *what() const throw();
    };

    class NoSpanFoundException : public std::exception {
    public:
        virtual char const *what() const throw();
    };
};

template<typename InputIterator>
void Span::addNumber(InputIterator begin, InputIterator end) {
    unsigned int distSize = std::distance(begin, end);
    unsigned int currentSize = m_curIndex;
    if (currentSize + distSize > m_vec.size()) throw FullSpanException();

    for (InputIterator iter = begin; iter != end; iter++) {
        m_vec[m_curIndex] = *iter;
        m_curIndex++;
    }
}
