#include<iostream>

#include<memory>

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


auto_ptr<Test> autoPtrFunc() {
	auto_ptr<Test> tmp(new Test());
	return tmp;
}

unique_ptr<Test> uniquePtrFunc() {
	unique_ptr<Test> tmp(new Test());
	return tmp;
}

int main()
{
	// smart pointers
	// auto_ptr
	// unique_ptr
	// shared_ptr
	// weak_ptr

	/*Test test;*/

	//Bar();

	/*auto_ptr<Test> test1(new Test);*/

	/*auto_ptr<Test> test(autoPtrFunc());
	test->testFoo();*/
	
	/*auto_ptr<int> ptr1(new int(5));

	cout << *ptr1 << endl;*/
	

	/*unique_ptr<Test> testUnique(uniquePtrFunc());
	testUnique->testFoo();*/
}