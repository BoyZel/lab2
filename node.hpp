#ifndef _NODE_HPP
#define _NODE_HPP
#include <vector>
using namespace std;
template <typename T> class Graph;
template <typename T> class Node{
	friend class Graph < T >;
	private:
	T data;
	int distance;
	bool visited;
	int parent;
	vector<int> neighbours;
};
#endif
