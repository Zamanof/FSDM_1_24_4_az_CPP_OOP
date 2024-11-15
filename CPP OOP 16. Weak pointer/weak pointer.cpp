#include<iostream>
#include<memory>

using namespace std;

class ForShared
{
	string name;
	int* array;

public:
	ForShared(string name)
		:name(name), array(new int[10000])
	{
		cout << "Object - " << name << " constructed" << endl;
	}
	~ForShared()
	{
		delete[] array;
		cout << "Object - " << name << " destructed" << endl;
	}
	void Foo()
	{
		cout << "Foo" << endl;
	}
};


int main() {
	// smart pointers
	// auto_ptr
	// unique_ptr
	// shared_ptr
	// weak_ptr

	ForShared* shared = new ForShared("first");
	shared_ptr<ForShared> shrPtr1(shared);	
	shared_ptr<ForShared> shrPtr2(shrPtr1);
	weak_ptr<ForShared> weakPtr(shrPtr1);
	cout<< shrPtr1.use_count()<<endl;
	cout<< weakPtr.use_count()<<endl;

	((shared_ptr<ForShared>)weakPtr)->Foo();
	static_cast<shared_ptr<ForShared>>(weakPtr)->Foo();

}