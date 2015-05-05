#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "net.h"

using namespace std;

vector<unsigned> getTopology(string input);
double getEta(string input);
double getMomentum(string input);
string getTransferFunction(string input);

unsigned getNextInputs(string input, vector<double> &inputVals);
unsigned getTargetOutputs(string input, vector<double> &targetOutputVals);

vector<double> readWeights(string input, const int x, const int y);

void saveNetwork(Net input, string filename);

void loadData(string input, vector<unsigned> &topology, vector<vector<double>> &inputVals, vector<vector<double>> &targetValues, double &eta, double &momentum, string &transferFunction);

Net loadnetwork(string input);

