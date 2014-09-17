using namespace std;
#include <string>
#include <iostream>

class testClass
{
public:
 operator char* () {return (char*)"hi";};
 operator int ()  {return 77;};
 operator std::string  () {return "hello";};
};

int main()
{
 char* c;
 int i;
 std::string s = "goodday";

 testClass t;

 c = t;
 i = t;
 s = t;

 cout<< "char: " << c << " int: " << i << " string: "<<s<<endl;

 return 0;
}