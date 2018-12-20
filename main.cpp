#include "graph.hpp"
#include "node.hpp"
#include "interface.hpp"
#include <iostream>
using namespace std;

int main(){
	Graph < int > graph1;
	Interface < int > interface;
	interface.Insertgraph( &graph1 );
	int a;
	cin>>a;
	graph1.BFS(a);
	cout<<endl<<endl;
	interface.Showgraph( graph1);
	return 0;
}
