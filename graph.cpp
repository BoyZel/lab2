#include "graph.hpp"
#include <iostream>
using namespace std;
template <typename T>
void Graph <T> :: insert(){
	int n,m;
	cin >> n >> m;
	NumberOfNodes = n;
	Node <T> node;
	nodes.assign(n,node);
	for(int i = 0; i < n; i++){
		T dana;
		cin >> dana;
		nodes[i].data = dana;
	}
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		nodes[a].neighbours.push_back(b);
		nodes[b].neighbours.push_back(a);
	}
}

template <typename T>
void Graph <T> :: show(){
	for(int i = 0; i < NumberOfNodes ; i++){
		cout<<"NODE "<<i<<endl;
		cout << nodes[i].data << " X ";
		for(int j = 0; j < nodes[i].neighbours.size(); j++)
			cout << nodes[i].neighbours[j] <<" ";
		cout<<endl;
	}
}
template class Graph<int>;
