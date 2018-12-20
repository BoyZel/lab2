#ifndef _NODE_HPP
#define _NODE_HPP
#include <vector>
using namespace std;
template <typename T> class Node{
	private:
	T data;
	int distance;
	bool visited;
	int parent;
	vector<int> neighbours;
	public:
	T GetData();
	int GetDistance();
	bool GetVisited();
	int GetParent();
	int GetNumOfNeighbours();
	int GetNeighbour(int);
	void SetParent (int);
	void SetData(T);
	void SetDistance(int);
	void SetVisited(bool);
	void AddNeighbour(int);
};
#endif
