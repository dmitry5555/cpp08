#include "easyfind.hpp"

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
    throw std::runtime_error("Number not found in container");
};


int main(int argc, char **argv) {
	
    std::vector<int> vec;
   
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

	easyfind(vec, 4);
    return 0;
}
