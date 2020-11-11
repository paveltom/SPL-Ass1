#include "Graph.h"
#include <vector>
using namespace std;

//Graph constructor
Graph::Graph(std::vector<std::vector<int>> matrix) {
    edges = matrix;
}

void infectNode(int nodeInd); //
bool isInfected(int nodeInd); //verifies if node at index 'nodeInd' is infected()
vector<vector<int>> edges;