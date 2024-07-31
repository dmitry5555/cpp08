#include "MutantStack.hpp"
#include <iostream>
#include <list>

template<typename T>
void printContainer(T& container, const std::string& name) {
    std::cout << name << " contents:" << std::endl;
    for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << std::endl;
}

int main()
{
    {
        std::cout << "Testing MutantStack:" << std::endl;
        MutantStack<int> mstack; // type of container is std::deque<int> with extra methods
        mstack.push(5);
        mstack.push(17);
        std::cout << "Top: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size: " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        printContainer(mstack, "MutantStack");
    }

    {
        std::cout << "Testing std::list:" << std::endl;
        std::list<int> lst;
        lst.push_back(5);
        lst.push_back(17);
        std::cout << "Top: " << lst.back() << std::endl;
        lst.pop_back();
        std::cout << "Size: " << lst.size() << std::endl;
        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);
        printContainer(lst, "std::list");
    }

    return 0;
}