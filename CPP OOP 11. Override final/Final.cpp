#include<iostream>

using namespace std;

class Base {
public:
	virtual void method() {
		cout << "Base method" << endl;
	}
};

class Derived : public Base
{
public:
	// final achar sozu bu class-dan toreyen classlarin bu methodu 
	// override etmesini engelleyir
	void method() override final {
		cout << "Derived method" << endl;
	}
};

class ChildDerived : public Derived
{
public:
};

void Foo(Base& object) {
	object.method();
}


int main() {
	Derived derived;
	ChildDerived child;

	Foo(derived);
	Foo(child);
}