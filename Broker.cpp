//
// Created by Anat on 10/9/2024.
//

#include "Broker.h"
#include "imports.h"
#include "Stock.h"
Broker::Broker(string id, string name, string ADDR, int value)
{
    ID = id;
    this->name  =name;
    this->ADDR = ADDR;
    worth = value;
    stocks = vector<Stock>();

}
