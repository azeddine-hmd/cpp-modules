#pragma once

#include <iostream>

class Span {
    int             *m_arr;
    unsigned int    m_size;
    unsigned int    m_curIndex;

    Span();

public:
    Span(unsigned int n);

    Span(Span const &copy);

    ~Span();

    Span &operator=(Span const &rhs);

    void addNumber(int value);

    unsigned int size() const;

    unsigned int getCurIndex() const;

    class SpanFullException : public std::exception {
    public:
        virtual char const *what() const throw();
    public:

    };
};
