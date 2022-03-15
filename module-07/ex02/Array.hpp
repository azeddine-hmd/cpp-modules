#pragma once

#include <iostream>

template<typename T>
class Array {
    std::size_t m_length;
    T *m_arr;

public:

    Array(): m_length(0), m_arr(NULL) {

    }

    Array(unsigned int n): m_length(n), m_arr(new T[n]()) {

    }

    Array(Array<T> const &copy): m_length(0), m_arr(NULL) {
        *this = copy;
    }

    ~Array() {
        delete[] m_arr;
    }

    Array<T> &operator=(Array<T> const &rhs) {
        if (this != &rhs) {
            delete[] m_arr;
            m_length = 0;
            m_length = rhs.size();
            m_arr = new T[m_length]();
            for (std::size_t i = 0; i < m_length; i++) {
                m_arr[i] = rhs.m_arr[i];
            }
        }

        return *this;
    }

    T &operator[](std::size_t index) {
        if (index < 0 || index >= m_length) {
            throw OutOfBoundException();
        }

        return m_arr[index];
    }

    size_t size() const {
        return m_length;
    }

    class OutOfBoundException : public std::exception {
    public:
        virtual char const *what() const throw () {
            return "index is out of bound";
        }
    };
};
