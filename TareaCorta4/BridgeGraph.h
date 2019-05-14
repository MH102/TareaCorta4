#pragma once
#include "DenseGraph.h"
class BridgeGraph
{
	DenseGraph& graph;
public:
	BridgeGraph(DenseGraph& graph):
		graph(graph){}
	class BridgeIterator;
	friend class BridgeIterator;
};
class BridgeGraph::BridgeIterator {
	const DenseGraph & G;
	unsigned int v;
	int i;
public:
	BridgeIterator(const DenseGraph &G, unsigned int v);
	Edge* beg();
	Edge* nxt();
	bool end();
};

