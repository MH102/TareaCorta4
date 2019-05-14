#include "pch.h"
#include "DenseGraph.h"
int main()
{
	DenseGraph g("Grafo 01", 20, true);
	g.insert(Edge(0, 1));
	g.insert(Edge(0, 5));
	g.insert(Edge(0, 6));
	g.insert(Edge(1, 2));
	g.insert(Edge(1, 0));
	g.insert(Edge(2, 1));
	g.insert(Edge(2, 6));
	g.insert(Edge(6, 2));
	g.insert(Edge(6, 7));
	g.insert(Edge(7, 4));
	g.insert(Edge(7, 8));
	g.insert(Edge(7, 10));
	g.insert(Edge(10, 8));
	g.insert(Edge(10, 7));
	g.insert(Edge(5, 0));
	g.insert(Edge(5, 3));
	g.insert(Edge(5, 4));
	g.insert(Edge(3, 4));
	g.insert(Edge(3, 5));
	g.insert(Edge(4, 9));
	g.insert(Edge(4, 11));
	g.insert(Edge(4, 3));
	g.insert(Edge(4, 5));
	g.insert(Edge(9, 4));
	g.insert(Edge(11, 9));
	g.insert(Edge(11, 4));
	g.insert(Edge(11, 12));
	g.insert(Edge(12, 11));
	g.print();
	DenseGraph::adjIterator A(g, 0);
	cout << "\nAdyacentes al nodo 0 = ";
	for (unsigned int w = A.beg(); !A.end(); w = A.nxt()) {
		cout << w << " ";
	}
	cout << "\n";
}