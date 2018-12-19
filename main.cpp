#include "graph.hpp"
#include "node.hpp"
#include <iostream>
using namespace std;

int main(){
	Graph < int > graph1;
	graph1.insert();
	int a;
	cin>>a;
	graph1.BFS(a);
	cout<<endl<<endl;
	graph1.show();
	return 0;
}
