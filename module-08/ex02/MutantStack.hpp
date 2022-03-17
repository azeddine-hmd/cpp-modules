#pragma once

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
     typedef typename std::stack<T>::container_type::iterator iterator;
     typedef typename std::stack<T>::container_type::const_iterator const_iterator;
     typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
     typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
public:
    MutantStack(): std::stack<T>() {

    }

    MutantStack(MutantStack const &copy): std::stack<T>(copy) {

    }

    virtual ~MutantStack() {

    }

    MutantStack &operator=(MutantStack const &rhs) {
        if (this != &rhs) {
            std::stack<T>::operator=(rhs);
        }

        return *this;
    }

    iterator begin() {
        return this->c.begin();
    }

    const_iterator begin() const {
        return this->c.begin();
    }

    reverse_iterator rbegin(void) {
        return this->c.rbegin();
    }

    const_reverse_iterator rbegin(void) const {
        return this->c.rbegin();
    }

    iterator end(void) {
        return this->c.end();
    }

    const_iterator end(void) const {
        return this->c.end();
    }

    reverse_iterator rend(void) {
        return this->c.rend();
    }

    const_reverse_iterator rend(void) const {
        return this->c.rend();
    }
};
