#include "pch.h"
#include "DenseGraph.h"
int main()
{
	DenseGraph g("Grafo 01", 10, true);
	g.insert(Edge(0, 3));
	g.insert(Edge(0, 5));
	g.insert(Edge(1, 4));
	g.insert(Edge(4, 8));
	g.print();
	DenseGraph::adjIterator A(g, 0);
	cout << "\nAdyacentes al nodo 0 = ";
	for (unsigned int w = A.beg(); !A.end(); w = A.nxt()) {
		cout << w << " ";
	}
	cout << "\n";
}