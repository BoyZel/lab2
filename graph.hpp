#include <node.h>

using namespace std;
template <typename T> class Graph{
	private:
	int NumberOfNodes;
	vector< Node<T> > nodes;
	public:
	void insert();
	void show();
}
