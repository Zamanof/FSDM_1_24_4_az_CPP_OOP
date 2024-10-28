#include<iostream>

using namespace std;
// Python	-> Super class	-	Sub class
// C++		-> Base class	-	Derived class
// C#		-> Parent class -	Child class

class BaseClass {
private:
	// public for self and friend class or methods
	// private for all
	int privateBaseField = 13;
protected:
	// public for self and friend class or methods
	// public for derived  
	int protectedBaseField = 69;
public:
	// public for all
	int publicBaseField = 789;
};

class DerivedPublic : public BaseClass
{
public:
	void accessInfo()
	{
		cout << ": public Base Class" << endl;
		cout << "Have access public fields and methods:" << endl;
		cout << "publicBaseField = " << publicBaseField << endl;
		cout << string(30, '_')<<endl;
		cout << "Have access protected fields and methods:" << endl;
		cout << "protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '_')<<endl;
		cout << "Don't have access private fields and methods:" << endl;
	}
};

class DerivedProtected : protected BaseClass
{
public:
	void accessInfo()
	{
		cout << ": protected Base Class" << endl;
		cout << "Have access public fields and methods:" << endl;
		cout << "publicBaseField = " << publicBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Have access protected fields and methods:" << endl;
		cout << "protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Don't have access private fields and methods:" << endl;
	}
};

class DerivedPrivate : private BaseClass
{
public:
	void accessInfo()
	{
		cout << ": private Base Class" << endl;
		cout << "Have access public fields and methods:" << endl;
		cout << "publicBaseField = " << publicBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Have access protected fields and methods:" << endl;
		cout << "protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Don't have access private fields and methods:" << endl;
	}
};

class ThirdInheritanceFromPublic : public DerivedPublic
{
public:
	void accessInfo()
	{
		cout << ": public Derived Class" << endl;
		cout << "Have access public fields and methods:" << endl;
		cout << "publicBaseField = " << publicBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Have access protected fields and methods:" << endl;
		cout << "protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Don't have access private fields and methods:" << endl;
	}
};

class ThirdInheritanceFromProtected : public DerivedProtected
{
public:
	void accessInfo()
	{
		cout << ": public Derived Class" << endl;
		cout << "All Base Class public and protected fields and methods are protected" << endl;
		cout << "Have access public fields and methods:" << endl;
		cout << "publicBaseField = " << publicBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Have access protected fields and methods:" << endl;
		cout << "protectedBaseField = " << protectedBaseField << endl;
		cout << string(30, '_') << endl;
		cout << "Don't have access private fields and methods:" << endl;
	}
};

class ThirdInheritanceFromPrivate : public DerivedPrivate
{
public:
	void accessInfo()
	{
		cout << ": public DerivedPrivate" << endl;
		cout << "All Base Class public and protected fields and methods are private" << endl;
		
	}
};

int main() {
	/*ThirdInheritanceFromPublic object1;
	object1.accessInfo();*/
	ThirdInheritanceFromProtected object2;
	object2.accessInfo();
	ThirdInheritanceFromPrivate object3;
	object3.accessInfo();
}