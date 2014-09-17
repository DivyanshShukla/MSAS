#ifndef CPP1_H_INCLUDED
#define CPP1_H_INCLUDED
#include<cstring>
#include<string>
#include<ctime>
#include<list>

struct tick
{
    time_t time;
    double price;
    tick(time_t,double);
};
class Stock {
    std::list<tick> all;
    std::string tckrSymbol;
    std::string company_name;
    std::string exchange_name;
    double price;
public:
    Stock(std::string ="", std::string ="", std::string ="", double =0.0);
    void display(); //const;
    void setPrice(double, time_t);
 };

#endif  CPP1_H_INCLUDED
