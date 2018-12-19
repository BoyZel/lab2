#include "node.hpp"
#include <iostream>
using namespace std;
template <typename T>
void Node <T> :: GetNode(){
	cout << data << " PARENT: " << parent;
	cout << " DISTANCE: " << distance << endl;
	cout << " NEIGHBOURS: ";
	for(int j = 0; j < neighbours.size(); j++)
		cout << neighbours[j] << " ";
}
template class Node<int>;
