//
// Created by Anat on 10/9/2024.
//

#ifndef MATMONEY_STOCK_H
#define MATMONEY_STOCK_H
#include "imports.h"
using namespace std;
class Stock {
public:
    std::string ID;
    string c_name;
    int value;
    Stock(string id, string company, int val);
    Stock();
};


#endif //MATMONEY_STOCK_H
