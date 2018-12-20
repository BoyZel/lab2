#ifndef _INTERFACE_HPP
#define _INTERFACE_HPP
#include "graph.hpp"
#include <iostream>
using namespace std;
template <typename T> class Interface{
	public:
	void Showgraph (Graph <T> );
	void Insertgraph (Graph <T> *);
};
#endif
