#include "Span.hpp"

int main(int argc, char **argv) {
	try {
        Span sp = Span(5); // add each numm by one
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);

		Span sp2(5);
		sp2.addRange(numbers.begin(), numbers.end()); // add maaany at once - with iterators
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

    } catch (const std::runtime_error& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

	return 0;
}
