#ifndef _NODE_HPP
#define _NODE_HPP
#include <vector>
using namespace std;
template <typename T> class Graph;
template <typename T> class Node{
	friend class Graph < T >;
	private:
	T data;
	vector<int> neighbours;
};
#endif
