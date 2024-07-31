#include "Span.hpp"

Span::Span(unsigned int num) : _n(num) {
	_vec.reserve(_n);
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (_vec.size() == _n) {
		throw std::runtime_error("Vector is full");
	}
	_vec.push_back(num);
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
