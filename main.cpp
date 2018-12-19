#include "graph.hpp"
#include "node.hpp"
#include <iostream>
using namespace std;

int main(){
	Graph < int > graph1;
	graph1.insert();
	graph1.show();
	graph1.BFS(0);
	cout<<endl<<endl;
	graph1.show();
	return 0;
}
