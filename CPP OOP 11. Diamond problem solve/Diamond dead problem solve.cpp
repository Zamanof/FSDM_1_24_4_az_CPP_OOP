#include<iostream>

using namespace std;

class Base {
public:
	Base()
	{
		cout << "Base constructor" << endl;
	}
};

class DerivedA : virtual public Base
{
public:
	DerivedA()
	{
		cout << "DerivedA constructor" << endl;
	}
};

class DerivedB : virtual public Base
{
public:
	DerivedB()
	{
		cout << "DerivedB constructor" << endl;
	}
};

class DerivedAB : public DerivedA, public DerivedB
{
public:
	DerivedAB()
	{
		cout << "DerivedAB constructor" << endl;
	}
};


int main() {
	DerivedAB obj;
	/*DerivedA obj2;*/
}