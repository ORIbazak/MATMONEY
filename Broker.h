//
// Created by Anat on 10/9/2024.
//

#ifndef MATMONEY_BROKER_H
#define MATMONEY_BROKER_H
#include "imports.h"
#include "Stock.h"
using namespace std;
class Broker {
public:
    string ID;
    string name;

    string ADDR;
    int worth;
    vector<Stock> stocks;

    Broker(string id, string name, string ADDR, int value);
};


#endif //MATMONEY_BROKER_H
