#pragma once
#include "DenseGraph.h"
class BridgeGraph
{
	 DenseGraph graph;
	
public:
	BridgeGraph(DenseGraph& Graph):
		graph(Graph){
		
	}
	class BridgeIterator;
	friend class BridgeIterator;
};
class BridgeGraph::BridgeIterator {
	 DenseGraph & G;
	unsigned int v;
	int i;
public:
	BridgeIterator( DenseGraph &G, unsigned int v);
	void beg(vector<bool>* visitado);
	bool search(DenseGraph m, unsigned int orig, unsigned int sea, int contadorVisitados,  vector<bool>* visitado);
	bool searchAux(unsigned int orig, unsigned int  curr, unsigned int sea);
	static bool contains(vector<unsigned int> ad, unsigned int  busq);
	void nxt(vector<bool>* visitado);
	bool end();
	
};

