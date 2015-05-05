#ifndef NET_H
#define NET_H

#include <vector>
#include <iostream>
#include <cassert>
#include <string>
#include "layer.h"
#include <string.h>

using namespace std;

class Net{

    double error;
    double recentAverageError;
    double eta;
    double momentum;
    string transferfunction;
    vector<Layer> layers ;// layers[layerNumber][neuronNumber]

public:
    Net(string input);
    Net(const vector<unsigned> &topology, const string &transferFunction, double eta = 0.1, double momentum = 0.5);

    //feedForward - operation to train the network
    void feedForward(const vector<double> &inputValues);

    //backPropagation learning
    void backPropagation(const vector<double> &targetValues);

    void getResults(vector<double> &resultValues) const;

    double getRecentAverageError() const;

    void setLayer(vector<double> values, int row);

    vector<double> getLayerValues(int row) const;

    vector<double> getWeights(int x, int y) const;

    int getTotalLayers() const;

    int getLayerSize(int x) const;

    string getTransferFunction() const;

    double getEta() const;

    double getMomentum() const;

    //Set the weight of neuron x,y to input...
    void setWeight(int x, int y, vector<double> input);

    Net& operator=(const Net &rhs);

};

#endif
