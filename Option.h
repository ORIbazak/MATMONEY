//
// Created by Anat on 10/9/2024.
//

#ifndef MATMONEY_OPTION_H
#define MATMONEY_OPTION_H
#include "imports.h"
#include "Stock.h"
class Option {
public:
    string ID;
    Stock stk;
    bool type;
    int price;
    pair<int,int> expire_date;
    Option(string id ,Stock s,bool o_type,int price, pair<int,int> date ) ;


};


#endif //MATMONEY_OPTION_H
