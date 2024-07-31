#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>

template<typename T>
void easyfind(T& container, int num) {
    typename T::iterator it = container.begin(); 
    while (it != container.end()) {
        if (*it == num) {
            std::cout << "Position of number " << std::distance(container.begin(), it + 1)<< std::endl;
            return;
        }
        ++it;
    }
	// can be solved with method std::find as well

    throw std::runtime_error("Number not found in container");
};


#endif