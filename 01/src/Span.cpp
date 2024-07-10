#include "Span.hpp"

void Span::addNumber(int num) {
	_n++;
	_vec.push_back(num);
	std::cout << "Number added: " << num << std::endl;
	std::cout << "Size of vector: " << _vec.size() << std::endl;
}

int Span::shortestSpan() {
	int ss = INT_MAX;

	std::sort(_vec.begin(), _vec.end());
	for (size_t i = 0; i < _vec.size() - 1; i++) {
		int currentSpan = _vec[i + 1] - _vec[i];
		if (currentSpan < ss) {
            ss = currentSpan;
        }
	}
	return ss;
}

int Span::longestSpan() {
	std::sort(_vec.begin(), _vec.end());
	int ls = _vec.back() - _vec.front();
	return ls;
}