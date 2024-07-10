#include "Span.hpp"

int main(int argc, char **argv) {
	Span span;
	
	span.addNumber(1);
	span.addNumber(5);
	span.addNumber(15);
	span.addNumber(0);
	span.addNumber(-1);
	span.addNumber(2);

	std::cout << "shortest span is: " << span.shortestSpan() << std::endl;
	std::cout << "longest span is: " << span.longestSpan() << std::endl;
	// std::cout << span.longestSpan() << std::endl;

	return 0;
}