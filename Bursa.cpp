//
// Created by Anat on 10/9/2024.
//
#include "imports.h"
#include "Bursa.h"
Bursa::Bursa() {

}
INPUT string_to_ENUM(const string& str) {
    if (str == "1") return STOCK;
    if (str == "2") return BROKER;
    if (str == "3") return OPTION;
    if (str == "4") return STATE;

    return UNKNOWN;  // Return UNKNOWN if the string does not match
}
Stock Bursa::createStock()
{
    string in;
    cout<<"stock id";
    cin>>in;
    string id = in;
    cout<<"c_name";
    cin>>in;
    string name = in;
    cout<<"how much worth?";
    cin>>in;
    int value = stoi(in);
    Stock s = Stock(id,name,value);
    return s;
}


int Bursa::addStock(Stock s) {


    Stocks.push_back(s);
    return 0;
}

int Bursa::RUN()
{
    bool run = true;
    string in;
    while (run) {
        cout << "1:stock, 2: Broker, 3:Option, 4:print state";
        cin >> in;
        INPUT req = string_to_ENUM(in);
        switch (req) {
            case (STOCK): {
                Stock stk = createStock();
                int result = addStock(stk);
                break;
            }
            case (OPTION): {
                Option p = createOption();
                int result = addOption(p);
                break;
            }
            case (BROKER): {
                Broker b = createBroker();
                int result = addBroker(b);
                break;
            }
            case (STATE):
            {
                cout<<"the bursa holds "<<Stocks.size()<<"stocks"<<endl;
                cout<<"the bursa holds "<<Options.size()<<"Options"<<endl;
                cout<<"the bursa has "<<Brokers.size()<<"brokers"<<endl;
                break;

            }
            case (UNKNOWN):
            {
                run = false;
                break;
            }
        }


    }
    return 0;
}

Option Bursa::createOption() {
    string in;
    cout<<"option id";
    cin>>in;
    string id = in;
    Stock s = createStock();
    cout<<"type of option?";
    cin>>in;
    bool type= in =="PUT";
    cout<<"worth?";
    cin>>in;
    int worth = stoi(in);
    cout<<"month expire?";
    cin>>in;
    int month = stoi(in);
    cout<<"year expire?";
    cin>>in;
    int year = stoi(in);
    pair<int,int> date;
    date.first = month;
    date.second = year;
    Option p = Option(id,s,type,worth,date);

    return p;
}

int Bursa::addOption(Option p){
    Options.push_back(p);


    return 0;
}

Broker Bursa::createBroker() {
    string in;
    cout<<"broker id";
    cin>>in;
    string id = in;

    cout<<"broker name?";
    cin>>in;
    string name = in;
    cout<<"home adress?";
    cin>>in;
    string addr = in;
    cout<<"how much money do you have?";
    cin>>in;
    int worth =stoi(in);
    Broker b = Broker(id,name,addr,worth);
    cout<<"how many stocks?";
    cin>>in;
    int count = stoi(in);
    for (int i =0;i<count;i++)
    {
        Stock s = createStock();
        b.stocks.push_back(s);

    }
    return b;

}

int Bursa::addBroker(Broker b) {
    Brokers.push_back(b);
    return 0;
}