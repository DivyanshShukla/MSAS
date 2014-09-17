#include"StringWrapper.h"
#include<string.h>

String::String(char *st)
{
    len = strlen(st);
    str = new char[len+1];
    strcpy(str,st);
}

String::String(const String& st)
{
    len = st.len;
    str = new char[len+1];
    strcpy(str, st.str);
}

String::~String()
{
    delete [] str;
}

bool operator>(const String& first, const String& second)
{
    return ((strcmp(first.str,second.str)>0)?true:false);
}

bool operator<(const String& first, const String& second)
{
    return ((strcmp(first.str,second.str)<0)?true:false);
}

int String::StringLength()
{
    return len;
}

String operator+(const String& first, const String& second)
{
    String temp;
    temp.len = first.len + second.len;
    temp.str = new char[temp.len+1];
    strcpy(temp.str, first.str);
    strcat(temp.str, second.str);
    return temp;
}

std::ostream& operator<<(std::ostream& out, const String& output)
{
    out << "String: " << output.str << " length: " << output.len << std::endl;
}

String& String::operator=(const String& justAnotherString)
{
    //std::cout << "inside assignment";
    if(this->str == justAnotherString.str)
        return *this;
    this->len = justAnotherString.len;
    this->str = new char[len+1];
    strcpy(this->str, justAnotherString.str);
    return *this;
}

String& String::operator*(int number)
{
    String temp;
    temp.len = ((this->len)*number);
    temp.str = new char[temp.len+1];
    while(number--)
    {
        std::cout << number << "inside loop";
        strcat(temp.str, (*this).str);
    }
    std::cout << " outside loop :";
    return temp;
}

char& String::operator[](int index)
{
    return (this->str)[index];
}

/* STUPID DRIVER function

#include<iostream>
#include"StringWrapper.h"
#include<string>

int main()
{
    String mine("Divyansh");
    char *Seth = "Siddharth";
    String yours(Seth);
    std::cout << mine;
    std::cout << yours;
    bool a = mine < yours;
    std::cout << a;

    mine = "Seth";
    std::cout << "mine :: " << mine;

    String hello,x,y,z;
    hello = x = y = z = "testing";
    hello = hello;
    std::cout << x << y << z << hello << std::endl;
    x = hello*3;
    std::cout << x << " x value";
    String c(mine);
    c = mine+yours;
    std::cout << c;


    char ch = mine[0];
    std::cout << ch << "The character output" ;
}
*/
