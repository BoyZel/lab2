#include "interface.hpp"

template <typename T>
void Interface <T> :: Insertgraph( Graph <T> *graph){
	int n,m;
	cin>>n>>m;
	graph->SetNumberOfNodes(n);
	for(int i = 0; i < n; i++){
		Node <T> *node = graph->GetNode( i );
		T dana;
		cin >> dana;
		node->SetData( dana );
		node->SetParent( -1 );
		node->SetDistance( -1 );
		node->SetVisited( 0 );
	}
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		graph->SetVertice( a, b);
	}
}

template <typename T>
void Interface<T> :: Showgraph( Graph <T> graph){
	cout << "ROOT " << graph.GetRoot() << endl;
	for(int i = 0; i < graph.GetNumberOfNodes() ; i++){
		cout << "NODE " << i << endl;
		Node <T> *node = graph.GetNode(i);
		cout << node->GetData() << " ";
		cout << "PARENT: " << node->GetParent() << " ";
		cout << "DISTANCE: " << node->GetDistance() << endl;
		cout << "NEIGHBOURS: ";
		for(int i = 0; i < node->GetNumOfNeighbours(); i++)
			cout << node->GetNeighbour( i )<< " ";
		cout << endl;
	}
}

template class Interface<int>;
