#include<iostream>

using namespace std;

template<class T>
class my_shared_ptr
{
private:
	T* ptr;
	size_t* count;
public:
	my_shared_ptr()
		:ptr(nullptr), count(nullptr)
	{}
	my_shared_ptr(T* ptr)
		:ptr(ptr), count(new size_t(1))
	{}
	my_shared_ptr(my_shared_ptr<T>& other)
		:ptr(other.ptr), count(other.count)
	{
		(*count)++;
	}
	my_shared_ptr<T>& operator=(my_shared_ptr<T>& other)
	{
		if (count != nullptr) {
			(*count--);
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = other.count;
		ptr = other.ptr;
		(*count)++;
		return this;
	}

	my_shared_ptr<T>& operator=(T* other)
	{
		if (count != nullptr) {
			(*count--);
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = new int(1);
		this->ptr = ptr;
		(*count)++;
		return this;
	}
	int use_count() 
	{
		return *count;
	}

	T& operator*() const
	{
		return *ptr;
	}
	
	T* operator->() const
	{
		return ptr;
	}
	T& get() const
	{
		return ptr;
	}

	~my_shared_ptr()
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
		}
	}

};

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

template <class T>
void bar(my_shared_ptr<T> shp)
{
	cout << "In function use count " << shp.use_count() << endl;
}

int main() 
{
	/*my_shared_ptr<int> ptr1(new int(98));
	my_shared_ptr<int> ptr2(ptr1);
	cout << "In main use count " << ptr1.use_count() << endl;

	{
		my_shared_ptr<int> ptr3 = ptr1;
		cout << "In scope use count " << ptr1.use_count() << endl;
	}
	cout << "In main use count " << ptr1.use_count() << endl;
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;*/

	my_shared_ptr<ForShared> shptr1 = new ForShared("First");
	cout << "In main use count " << shptr1.use_count() << endl;
	{
		my_shared_ptr<ForShared> shptr2 = shptr1;
	cout << "In scope use count " << shptr1.use_count() << endl;
	}
	cout << "In main use count " << shptr1.use_count() << endl;
	shptr1->Foo();
	bar(shptr1);
	cout << "In main use count " << shptr1.use_count() << endl;
}