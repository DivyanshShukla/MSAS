#ifndef INTEGERWRAPPER_H_INCLUDED
#define INTEGERWRAPPER_H_INCLUDED
#include<iostream>

class Integer
{
    int *value;
public:
    Integer(int);
    Integer(const Integer& );
    ~Integer();
    //~Integer();
    friend Integer operator+(const Integer& first, const Integer& second);
    friend Integer operator-(const Integer& first, const Integer& second);
    friend Integer operator/(const Integer& first, const Integer& second);
    friend Integer operator*(const Integer& first, const Integer& second);
    Integer operator++(int);                                                    //postfix
    Integer& operator++();                                                      //prefix
    Integer operator--(int);                                                    //postfix
    Integer& operator--();
    Integer& operator=(const Integer& rhs);                                                      //prefix
    friend bool operator< (const Integer& first, const Integer& second);
    friend bool operator> (const Integer& first, const Integer& second);
    friend bool operator== (const Integer& first, const Integer& second);
    friend bool operator!= (const Integer& first, const Integer& second);
    friend std::ostream& operator<<(std::ostream& output, const Integer& num);
};

#endif // INTEGERWRAPPER_H_INCLUDED
