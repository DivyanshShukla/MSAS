#ifndef STRINGWRAPPER_H_INCLUDED
#define STRINGWRAPPER_H_INCLUDED
#include<string>
#include<iostream>
class String
{
    char *str;
    int len;
public:
    String(char * = "");
    String(const String& st);
    ~String();
    friend String operator+(const String& first, const String& second);
    int StringLength();
    friend bool operator>(const String& first, const String& second);
    friend bool operator<(const String& first, const String& second);
    String& operator=(const String& rhs);
    friend std::ostream& operator<<(std::ostream& out, const String& output);
    friend std::istream& operator>>(std::istream& in, const String input);
    String& operator*(int number);
    friend bool operator==(const String& first, const String& second);
    char& operator[](int index);
    //cast overloading
};

#endif // STRINGWRAPPER_H_INCLUDED
