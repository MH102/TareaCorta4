#include "pch.h"
#include "BridgeGraph.h"




BridgeGraph::BridgeIterator::BridgeIterator(const DenseGraph & G, unsigned int v)
	: G{ G }, v{ v }, i{ 0 } {}

Edge * BridgeGraph::BridgeIterator::beg()
{	

	
	return nxt();
}

Edge * BridgeGraph::BridgeIterator::nxt()
{
	return nullptr;
}

bool BridgeGraph::BridgeIterator::end()
{
	return false;
}
