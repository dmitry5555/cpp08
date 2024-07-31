#ifndef MSTACK_HPP
#define MSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename IterStack = std::deque<T> >
class MutantStack : public std::stack<T, IterStack>
{

	public:
		typedef typename IterStack::iterator iterator;
		typedef typename IterStack::const_iterator const_iterator;

		MutantStack() : std::stack<T, IterStack>() {}
		~MutantStack() {}
		MutantStack(const MutantStack &other) : std::stack<T, IterStack>(other) {}
		MutantStack &operator=(const MutantStack &other) {
			if (this != &other)
				std::stack<T, IterStack>::operator=(other);
			return *this;
		}
		
		iterator begin() {
			// return std::stack<T, IterStack>::c.begin();
			return this->c.begin();
		}
		iterator end() { return this->c.end(); }
		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }
				
};

#endif