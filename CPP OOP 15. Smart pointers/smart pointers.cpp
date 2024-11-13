#include<iostream>

using namespace std;

template<class T>
class mySmartPointer
{
private:
	T* ptr;
public:
	mySmartPointer(T* ptr = nullptr)
		:ptr(ptr){}
	~mySmartPointer() { delete ptr; }
	T& operator*()const
	{
		return *ptr;
	}
	T* operator->()const
	{
		return ptr;
	}
};

class Test
{
public:
	string text;
	Test() 
		:text("Salam")
	{
		cout << "Constructed" << endl;
	}
	~Test()
	{
		cout << "Destructed" << endl;
	}

	void testFoo() 
	{
		cout << "Foo" << endl;
	}
};

void Bar()
{
	/*Test* test = new Test();*/
	/*return;*/
	/*throw new exception();*/
	/*delete test;*/
	/*auto_ptr<Test> test1(new Test);*/
	mySmartPointer<Test>test2(new Test);
	test2->testFoo();
	return;
	/*test1->testFoo();*/
}

int main()
{
	// smart pointers
	// auto_ptr
	// unique_ptr
	// shared_ptr
	// weak_ptr

	/*Test test;*/

	Bar();

	/*auto_ptr<Test> test1(new Test);*/

	
}