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

	shared_ptr<ForShared> shared1(new ForShared("obj 1"));
	shared_ptr<ForShared> shared2(shared1);
	cout << "Share " << shared1.use_count() << " smart pointers" << endl;

	{
		shared_ptr<ForShared> shared3(shared1);
		cout << "Share " << shared1.use_count() << " smart pointers" << endl;
	}

	cout << "Share " << shared1.use_count() << " smart pointers" << endl;

}