#ifndef _GRAPH_HPP
#define _GRAPH_HPP
#include "node.hpp"

using namespace std;
template <typename T> class Graph{
	private:
	int NumberOfNodes;
	int root;
	vector< Node<T> > nodes;
	public:
	int GetNumberOfNodes();
	int GetRoot();
	Node <T> *GetNode( int );
	
	void SetNumberOfNodes( int );
	void SetRoot( int );
	void SetVertice( int, int );
	void BFS ( int );
	void test();
};
#endif
