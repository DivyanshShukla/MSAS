using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h> 
#include "sethstring.h"

int main()
{
	sethstring s1("Divyansh"),s2,s3,s4("123");
	cout << "s4 is: " << s4 << endl;
	cout << "s1 is: " << s1 << endl;
	cout << "input s2: ";
	cin >> s2;
	cout << s1 << " " << s2 << endl;
	s3 = s2 = "Seth";
	cout << "New s2 is: " << s2 << endl << "New s3 is: " << s3 << endl;
	if (s1 > s2)
		cout << "s1 > s2" << endl;
	else
		cout << "s1 is not > than s2 \n";
	s4 = s1 + s2 ;
	s4 = "23";
	cout << (int)s4 << endl;
	if (s4 == 23)
		cout << "works because of casting!\n";
	if (s4 != "123")
		cout << "works because of operator overloading!\n";
}