#include "Easyfind.hpp"

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
