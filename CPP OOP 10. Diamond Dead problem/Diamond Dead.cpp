#include <iostream>

using namespace std;
class Base {
public:
	Base() {
		cout << "Constructor Base" << endl;
	}
	void Show(){
		cout << "Show Base" << endl;
	}
	~Base()
	{
		cout << "Destructor Base" << endl;
	}
};

class DerivedA : public Base
{
public:
	DerivedA() {
		cout << "Constructor DerivedA" << endl;
	}
	void Show() {
		cout << "Show DerivedA" << endl;
	}
	~DerivedA()
	{
		cout << "Destructor DerivedA" << endl;
	}
};

class DeriveB : public Base
{
public:
	DeriveB() {
		cout << "Constructor DeriveB" << endl;
	}
	void Show() {
		cout << "Show DeriveB" << endl;
	}
	~DeriveB()
	{
		cout << "Destructor DeriveB" << endl;
	}
};

class DerivedAB : public DerivedA, public DeriveB
{
public:
	DerivedAB()
	{
		cout << "Constructor DeriveAB" << endl;
	}
	void Show() {
		cout << "Show DeriveAB" << endl;
	}
	~DerivedAB()
	{
		cout << "Destructor DeriveAB" << endl;
	}
};

int main() {
	DerivedAB objAB;
}