#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <algorithm>

class Span {
	private:
		unsigned int _n;
		std::vector<int> _vec;

	public:
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
};


#endif