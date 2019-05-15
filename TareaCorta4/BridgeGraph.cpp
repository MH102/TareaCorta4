#include "pch.h"
#include "BridgeGraph.h"




BridgeGraph::BridgeIterator::BridgeIterator(DenseGraph & G, unsigned int v)
	: G{ G }, v{ v }, i{ 0 } {}

void BridgeGraph::BridgeIterator::beg(vector<bool>* visitado)
{	
	i = -1; nxt(visitado);
	
}
bool BridgeGraph::BridgeIterator::search(DenseGraph m,unsigned int orig, unsigned int sea, int contadorVisitados,vector<bool>* visitado)
{
	vector<unsigned int> ad;
	DenseGraph::adjIterator A(m, 0);
	
	for (unsigned int w = A.beg(); !A.end(); w = A.nxt()) {
		if (w != orig)ad.push_back(w);
	}

	if (contains(ad, sea))
		return  true;
	else {
		visitado->at(orig) = true;
		contadorVisitados++;
		if (contadorVisitados != 13) {
			for (i = 0; i < ad.size(); i++) {
				
				if (!visitado->at(ad.at(i))) {
					search(m,orig = ad[i], sea, contadorVisitados,visitado);
				}
			}
		}
		else
			return false;

	}
	return false;
}



bool BridgeGraph::BridgeIterator::contains(vector<unsigned int> ad, unsigned int busq)
{
	for (int i = 0; i < ad.size(); i++) {
		if (ad[i] == busq) return true;
	}
	return false;
}



void BridgeGraph::BridgeIterator::nxt(vector<bool>* visitado)
{
	for (i++; i < int(G.V()); i++){
		vector<unsigned int> ad;
		DenseGraph::adjIterator A(G, i);
		for (unsigned int w = A.beg(); !A.end(); w = A.nxt()) {
			ad.push_back(w);
		}
		for (unsigned int j = 0; j < ad.size(); j++) {
			cout << "Los  numeros " << i << j<<ad[j];
				G.remove(Edge(i,ad[j]));
			if(!search(G,i,j,0,visitado)){
				cout << "(" << i << "," << ad[j] << ")" << " es puente" << endl;
				break;
			}
			
		}
		
	
	}
		
	
}
	

	

	bool BridgeGraph::BridgeIterator::end()
{
	return false;
}
