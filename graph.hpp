#ifndef _GRAPH_HPP
#define _GRAPH_HPP
#include "node.hpp"

using namespace std;
template <typename T> class Graph{
	private:
	int NumberOfNodes;
	vector< Node<T> > nodes;
	public:
	void insert();
	void show();
};
#endif
