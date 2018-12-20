#include "node.hpp"
#include <iostream>
using namespace std;
template <typename T>
int Node <T> :: GetDistance(){
	return distance;
}

template <typename T>
T Node <T> :: GetData(){
	return data;
}

template <typename T>
int Node <T> :: GetParent(){
	return parent;
}

template <typename T>
bool Node <T> :: GetVisited(){
	return visited;
}


template <typename T>
int Node <T> :: GetNumOfNeighbours(){
	return neighbours.size();
}


template <typename T>
int Node <T> :: GetNeighbour( int a ){
	return neighbours[a];
}

template <typename T>
void Node <T> :: SetData( T a ){
	data=a;
}

template <typename T>
void Node <T> :: SetParent( int a ){
	parent=a;
}

template <typename T>
void Node <T> :: SetDistance( int a ){
	distance=a;
}

template <typename T>
void Node <T> :: SetVisited( bool a ){
	visited=a;
}

template <typename T>
void Node <T> :: AddNeighbour( int a ){
	neighbours.push_back(a);
}

template class Node<int>;
