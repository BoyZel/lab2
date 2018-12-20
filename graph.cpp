#include "graph.hpp"
#include <queue>
#include <iostream>
using namespace std;

template <typename T>
int Graph <T> :: GetNumberOfNodes(){
	return NumberOfNodes;
}

template <typename T>
int Graph <T> :: GetRoot(){
	return root;
}

template <typename T>
Node<T> *Graph <T> :: GetNode(int a){
	return &nodes[a];
}

template <typename T>
void Graph <T> :: SetNumberOfNodes(int a){
	NumberOfNodes = a;
	Node <T> node;
	nodes.assign(a,node);
}

template <typename T>
void Graph <T> :: SetVertice( int a, int b ){
	Node <T> *node;
	node = GetNode( a );
	node->AddNeighbour( b );
	node = GetNode( b );
	node->AddNeighbour( a );
}

template <typename T>
void Graph <T> :: SetRoot( int a ){
	root = a;
}

template <typename T>
void Graph <T> :: test(){
	SetNumberOfNodes(8);
	for(int i=0; i<8; i++){
		Node <int> *node = GetNode( i );
		node->SetData(i) ;
		node->SetParent(-1);
		node->SetDistance(-1);
		node->SetVisited(0);
	}
		SetVertice(1,2);
		SetVertice(1,0);
		SetVertice(0,6);
		SetVertice(0,5);
		SetVertice(6,5);
		SetVertice(6,4);
		SetVertice(6,3);
		SetVertice(5,5);
		SetVertice(5,7);
		SetVertice(5,4);
}

template < typename T >
void Graph <T> :: BFS(int r){
	SetRoot(r);
	for( int i=0; i<GetNumberOfNodes(); i++ ){
		Node <T> *node = GetNode(i);
		node->SetDistance(-1);
		node->SetVisited(0);
		node->SetParent(-1);
	}
	queue< int > waiting; 
	Node <T> *node = GetNode(r);
	node->SetDistance(0);
	node->SetVisited(1);
	for( int i = 0; i < node->GetNumOfNeighbours(); i++){ //processing the root
		int tmp;
		tmp = node->GetNeighbour(i);
		Node <T> *nodetmp = GetNode(tmp);
		if( tmp!=r ){
			nodetmp->SetDistance( node->GetDistance() + 1);
			nodetmp->SetParent( r );
			waiting.push( tmp ) ;
		}
	}
	while( waiting.empty() == 0 ){
		int tmp=waiting.front();
		Node <T> *nodetmp = GetNode(tmp);
		waiting.pop();
		if( nodetmp->GetVisited() == 0 ){
			nodetmp->SetVisited(1);
			for( int i = 0; i < nodetmp->GetNumOfNeighbours(); i++){
				int tmp2 = nodetmp->GetNeighbour(i);
				Node <T> *nodetmp2 = GetNode(tmp2);
				if( nodetmp2->GetVisited()==0 ){
					if(nodetmp2->GetParent() == -1){
					nodetmp2->SetDistance(nodetmp->GetDistance() + 1);
					nodetmp2->SetParent( tmp );
					waiting.push( tmp2 ) ;
					}
				}
			}
		}
	}
}
template class Graph<int>;
