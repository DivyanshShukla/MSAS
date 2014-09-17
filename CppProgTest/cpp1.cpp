#include"cpp1.h"
#include<iostream>
#include<cstring>
#include<list>

tick::tick(time_t t, double p) : time(t), price(p) {}

Stock::Stock(std::string tckr, std::string name, std::string exchange, double p) : tckrSymbol(tckr), company_name(name), exchange_name(exchange), price(p)
{
    tick t(time(0),p);
    //t.price = p;
    //t.time = time(0);
    (this->all).push_back(t);
}

void Stock::setPrice(double p, time_t t)
{
    this->price = p;
    tick temp(time(0),p);
    (this->all).push_back(temp);
}

void Stock::display()
{
    std::cout << "Details of the Stock: \n"
    << "Ticker name: " << this->tckrSymbol
    << "Company name: " << this->company_name
    << " Exchange Name: " << exchange_name
    << " price: " << price << std::endl;


    for(std::list<tick>::iterator i = all.begin(); i !=all.end(); i++)
    {
        std::cout << "price in list: " << i->price << "time: " << i->time << std::endl;
    }
}


/* driver function:

#include <iostream>
#include"cpp1.h"

using namespace std;

int main()
{
    //using std list;
    Stock tata("tata", "TATA", "NSE", 1000.00);
    tata.display();
    tata.setPrice(1200.00, time(0));
    tata.display();
    int i = 1;
    double price_p = 0.0;
    double a =0;
    do
    {
        a = i+25;
        tata.setPrice(a,time(0));
        i++;
    }while(i%1000);
    tata.display();
}
*/
