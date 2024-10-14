//
// Created by Anat on 10/9/2024.
//

#ifndef MATMONEY_BURSA_H
#define MATMONEY_BURSA_H
#include "imports.h"
#include "Stock.h"
#include "Option.h"
#include "Broker.h"
class Bursa {
public:
    vector<Stock> Stocks;
    vector<Option> Options;
    Bursa();
    int RUN();
    //Stock
    int addStock(Stock s);
    Stock createStock();
    //option
    Option createOption();
    int addOption(Option p);
    //broker
    Broker createBroker();
    int addBroker(Broker b );
    private:
    vector<Broker> Brokers;
};


#endif //MATMONEY_BURSA_H
