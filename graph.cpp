#include "graph.hpp"
#include <iostream>
#include <queue>
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
		nodes[i].parent = -1;
		nodes[i].distance = -1;
		nodes[i].visited = 0;
	}
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		nodes[a].neighbours.push_back(b);
		nodes[b].neighbours.push_back(a);
	}
}
template <typename T>
void Graph <T> :: test(){
	NumberOfNodes=8;
	Node <T> node;
	nodes.assign(8,node);
	for(int i=0; i<8; i++){
		nodes[i].data = i;
		nodes[i].parent = -1;
		nodes[i].distance = -1;
		nodes[i].visited = 0;
	}
		nodes[1].neighbours.push_back(2);
		nodes[2].neighbours.push_back(1);
		nodes[1].neighbours.push_back(0);
		nodes[0].neighbours.push_back(1);
		nodes[0].neighbours.push_back(6);
		nodes[6].neighbours.push_back(0);
		nodes[0].neighbours.push_back(5);
		nodes[5].neighbours.push_back(0);
		nodes[6].neighbours.push_back(5);
		nodes[5].neighbours.push_back(6);
		nodes[6].neighbours.push_back(4);
		nodes[4].neighbours.push_back(6);
		nodes[6].neighbours.push_back(3);
		nodes[3].neighbours.push_back(6);
		nodes[5].neighbours.push_back(5);
		nodes[5].neighbours.push_back(5);
		nodes[5].neighbours.push_back(7);
		nodes[7].neighbours.push_back(5);
		nodes[5].neighbours.push_back(4);
		nodes[4].neighbours.push_back(5);
}

template <typename T>
void Graph <T> :: show(){
	cout << "ROOT " << root << endl;
	for(int i = 0; i < NumberOfNodes ; i++){
		cout << "NODE " << i << endl;
		cout << nodes[i].data << " PARENT: " << nodes[i].parent;
		cout << " DISTANCE: " << nodes[i].distance << endl;
		cout << " NEIGHBOURS: ";
		for(int j = 0; j < nodes[i].neighbours.size(); j++)
			cout << nodes[i].neighbours[j] << " ";
		cout << endl;
	}
}

template < typename T>
int Graph <T> :: GetDistance( int a ){
	return nodes[a].distance;
}

template < typename T>
int Graph <T> :: GetParent( int a ){
	return nodes[a].parent;
}

template < typename T >
void Graph <T> :: BFS(int r){
	root=r;
	for( int i=0; i<NumberOfNodes; i++ ){
		nodes[i].distance = -1;
		nodes[i].visited = 0;
		nodes[i].parent=-1;
	}
	queue< int > waiting; 
	nodes[r].distance = 0;
	nodes[r].visited = 1;
	for( int i = 0; i < nodes[r].neighbours.size(); i++){ //processing the root
		int tmp;
		tmp = nodes[r].neighbours[i];
		if( tmp!=r ){
			nodes[tmp].distance = nodes[r].distance + 1;
			nodes[tmp].parent = r;
			waiting.push( tmp ) ;
		}
	}
	while( waiting.empty() == 0 ){
		int tmp=waiting.front();
		waiting.pop();
		if( nodes[tmp].visited == 0 ){
			nodes[tmp].visited = 1;
			for( int i = 0; i < nodes[tmp].neighbours.size(); i++){
				int tmp2;
				tmp2 = nodes[tmp].neighbours[i];
				if( nodes[tmp2].visited ==0 ){
					if(nodes[tmp2].parent==-1){
					nodes[tmp2].distance = nodes[tmp].distance + 1;
					nodes[tmp2].parent = tmp;
					waiting.push( tmp2 ) ;
					}
				}
			}
		}
	}
}
template class Graph<int>;
