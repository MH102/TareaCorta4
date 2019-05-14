#pragma once
#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct Edge {
	unsigned int v, w;
	Edge(unsigned int v, unsigned int w)
		: v{ v }, w{ w } {}
};
class DenseGraph {
	// Estructura para matrices
	string name;
	unsigned int Vcnt, Ecnt;
	bool digraph;
	vector<vector<bool>> adj;
public:
	DenseGraph(string, unsigned int, bool);
	//~DenseGraph();
	unsigned int V() const { return Vcnt; }
	unsigned int E() const { return Ecnt; }
	bool directed() const { return digraph; }
	void insert(Edge);
	void remove(Edge);
	void print();
	string getName();
	bool edge(unsigned int, unsigned int);
	class adjIterator;
	friend class adjIterator;
};
class DenseGraph::adjIterator {
	const DenseGraph & G;
	unsigned int v;
	int i;
public:
	adjIterator(const DenseGraph &G, unsigned int v);
	unsigned int beg();
	unsigned int nxt();
	bool end();
};