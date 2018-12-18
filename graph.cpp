#include "graph.hpp"
#include <iostream>
using namespace std;

void Graph :: insert(){
	int n;
	cin >> n >> m;
	NumberOfNodes = n;
	nodes.assign(n);
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

void Graph :: show(){
	for(int i = 0; i < NumberOfNodes ; i++){
		cout << nodes[i].data << " X ";
		for(int j = 0; j < nodes[i].size(); j++)
			cout << node[i].neighbours[j] <<" ";
		cout<<endl;
	}
}
