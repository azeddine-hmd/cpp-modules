#pragma once

#include <algorithm>

template<typename T>
int easyfind(T &container, int value) {

    typename T::iterator iter = std::find(container.begin(), container.end(), value);

    if (iter == container.end()) {
        return -1;
    }

    int index = iter - container.begin();

    return index;
}
