//
// Created by Anat on 10/9/2024.
//

#include "Option.h"
#include "Stock.h"
Option::Option(string id ,Stock s,bool o_type,int value, pair<int,int> date ) {
    ID = id;
    stk =s;
    type = o_type;
    price= value;
    expire_date = date;

}


