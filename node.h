#include <vector>
using namespace std;
class Graph;
template <typename T> class Node{
	friend class Graph;
	private:
	T data;
	vector<Node> neighbours;
}
