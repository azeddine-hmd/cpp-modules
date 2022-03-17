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

    unsigned int getCurIndex() const;

    std::vector<int> const &getVec() const;

    unsigned int shortestSpan() const;

    unsigned int longestSpan() const;

    class FullSpanException : public std::exception {
    public:
        virtual char const *what() const throw();
    };

    class NoSpanFoundException : public std::exception {
    public:
        virtual char const *what() const throw();
    };
};
