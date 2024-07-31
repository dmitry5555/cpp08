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
	// can be solved with method std::find as well

    throw std::runtime_error("Number not found in container");
};


int main(int argc, char **argv) {
	
    std::vector<int> vec;
   
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

	try {
        easyfind(vec, 9);  // 6 нет в векторе
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
        return 1;  // Завершение программы с кодом ошибки
    }

    return 0;
}
