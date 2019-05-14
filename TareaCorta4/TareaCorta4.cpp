#include "pch.h"
#include "BridgeGraph.h"
int main()
{
	DenseGraph g("Grafo 01", 10, true);
	g.insert(Edge(0, 5));
	g.insert(Edge(0, 1));
	g.insert(Edge(0, 6));
	g.insert(Edge(1, 2));
	g.insert(Edge(2, 6));
	g.insert(Edge(6,7));
	g.print();
	DenseGraph::adjIterator A(g, 0);
	for (unsigned int w = A.beg(); !A.end(); w = A.nxt()) {
		cout << w << " ";
	}
	cout << "\n";
}