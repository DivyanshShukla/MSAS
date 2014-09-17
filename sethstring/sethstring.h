class sethstring
{
	char *mystring;
public:
	sethstring(const char *p_str = "");
	~sethstring();
	operator int();
	sethstring& operator= (const sethstring&);
	friend bool operator< (const sethstring&, const sethstring&);
	friend bool operator> (const sethstring&, const sethstring&);
	friend bool operator!= (const sethstring& left, const sethstring& right);	
	friend istream& operator>> (istream&, sethstring&);
	friend ostream& operator<< (ostream&, const sethstring&);
	friend sethstring operator+ (const sethstring& left, const sethstring& right);
};

sethstring::sethstring (const char *p_str)
{
	mystring = new char [strlen(p_str)+1];
	strcpy(mystring,p_str);
}

sethstring::~sethstring ()
{
	delete [] mystring;
}

sethstring::operator int()
{
	return atoi(this->mystring);
}

sethstring& sethstring::operator= (const sethstring& right)
{
	if (this != &right)
	{
		delete [] mystring;
		mystring = new char [strlen(right.mystring)+1];
		strcpy(mystring,right.mystring);
	}
	return *this;
}

bool operator< (const sethstring& left, const sethstring& right)
{
	if (strcmp(left.mystring, right.mystring) < 0)
		return true;
	else 
		return false;
}

bool operator> (const sethstring& left, const sethstring& right)
{
	if (strcmp(left.mystring, right.mystring) > 0)
		return true;
	else
		return false;
}

bool operator!= (const sethstring& left, const sethstring& right)
{
	return strcmp(left.mystring,right.mystring);
}

ostream& operator<< (ostream& out, const sethstring& right)
{
	out << right.mystring;
	return out;
}

istream& operator>> (istream& in, sethstring& right)
{
	in >> right.mystring;
	return in;
}

sethstring operator+ (const sethstring& left, const sethstring& right)
{
	char* temp = new char (strlen(left.mystring)+strlen(right.mystring)+1);
	strcat(temp,left.mystring);
	strcat(temp,right.mystring);
	return sethstring(temp);
}