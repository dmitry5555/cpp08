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
		Span(unsigned int size);
		~Span();
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		// шаблонная ф-я с итераторами
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end) {
			while (begin != end) {
				addNumber(*begin);
				++begin;
			}
		}
};


#endif