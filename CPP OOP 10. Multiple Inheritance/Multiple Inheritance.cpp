#include <iostream>

using namespace std;

class A {
public:
	int fieldA;
	A() {
		cout << "Constructor A" << endl;
	}
	void methodA() {
		cout << "Method A" << endl;
	}
	void show() {
		cout << "Show A" << endl;
	}
	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B {
public:
	int fieldB;
	B() {
		cout << "Constructor B" << endl;
	}
	void methodB() {
		cout << "Method B" << endl;
	}
	void show() {
		cout << "Show B" << endl;
	}
	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C: public A, public B
{
public:
	int fieldC;
	C()
	{
		cout << "Constructor C" << endl;
	}
	void methodC() {
		cout << "Method C" << endl;
	}
	void show() {
		A::show();
		B::show();
		cout << "Show C" << endl;
	}
	~C()
	{
		cout << "Destructor C" << endl;
	}

};

class D : public C
{
public:
	D() {
		cout << "Constructor D" << endl;
	}
	void methodD() {
		cout << "Method D" << endl;
	}
	void show() {
		cout << "Show D" << endl;
	}
	~D()
	{
		cout << "Destructor D" << endl;
	}
};
int main() 
{
	// Multiple inheritance
	/*C cObj;
	cObj.fieldA = 16;
	cObj.fieldB = 48;
	cObj.fieldC = 35;*/
	/*cObj.methodA();
	cObj.methodB();
	cObj.methodC();*/
	/*cObj.show();*/
	/*cObj.A::show();
	cObj.B::show();*/

	D dObj;

}