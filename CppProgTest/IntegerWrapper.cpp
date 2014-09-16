#include"IntegerWrapper.h"
#include<iostream>

Integer::Integer(int i = 0) : value(new int(i)) {}
Integer::Integer(const Integer& anotherInteger)
{
    value = new int(*(anotherInteger.value));
}
Integer::~Integer()
{
    delete value;
}
Integer operator+(const Integer& first, const Integer& second)
{
    Integer temp;
    *(temp.value) = *(first.value) + *(second.value);
    return temp;
}

Integer operator-(const Integer& first, const Integer& second)
{
    Integer temp;
    *(temp.value) = *(first.value) - *(second.value);
    return temp;
}

Integer operator*(const Integer& first, const Integer& second)
{
    Integer temp;
    *(temp.value) = *(first.value) * *(second.value);
    return temp;
}

Integer operator/(const Integer& first, const Integer& second)
{
    Integer temp;
    *(temp.value) = *(first.value) / *(second.value);
    return temp;
}

Integer Integer::operator++(int)
{
    Integer temp;
    *(temp.value) = *value;
    *value++;
    return temp;
}

Integer& Integer::operator++()
{
    *value++;
    return *this;
}

Integer Integer::operator--(int)
{
    Integer temp;
    *(temp.value) = *value;
    *value--;
    return temp;
}

Integer& Integer::operator--()
{
    *value--;
    return *this;
}

bool operator<(const Integer& first, const Integer& second)
{
    return (*(first.value) < *(second.value));
}

bool operator>(const Integer& first, const Integer& second)
{
    return (*(first.value) > *(second.value));
}

bool operator!=(const Integer& first, const Integer& second)
{
    return (*(first.value) != *(second.value));
}

bool operator==(const Integer& first, const Integer& second)
{
    return (*(first.value) == *(second.value));
}

Integer& Integer::operator=(const Integer& rhs)
{
    value = new int(*(rhs.value));
    return *this;
}

std::ostream& operator<<(std::ostream& output, const Integer& x)
{
    output << "Integer value: " << *(x.value) << std::endl;
    return output;
}


/* driver file:

#include"IntegerWrapper.h"
#include<iostream>

int main()
{
    Integer one(5);
    Integer two(2);
    Integer three(33);
    Integer a(one);
    std::cout << a ;
    std::cout << one;
    std::cout <<two;
    std::cout << three;
    a=one+two;
    bool x = one == two;
    std::cout << x;
    std::cout << a ;
}
*/
