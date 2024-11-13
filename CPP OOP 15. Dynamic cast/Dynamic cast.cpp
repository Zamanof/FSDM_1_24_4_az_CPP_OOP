#include<iostream>

using namespace std;
class Animal
{
public:
	string name;
	virtual void Sound() = 0;
};

class Dog : public Animal
{
public:
	int age;
	void Sound() override {
		cout << "Gaw gaw" << endl;
	}
	void fooDog()
	{
		cout << "Dog foo" << endl;
	}
};

class Tiger: public Animal
{
public:
	string liveArea;
	void Sound() override {
		cout << "RRRRRRRRR" << endl;
	}
	void fooTiger()
	{
		cout << "Tiger foo" << endl;
	}
};

class Cat : public Animal
{
public:
	float price;
	void Sound() override {
		cout << "Meow meow" << endl;
	}
	void fooCat()
	{
		cout << "Cat foo" << endl;
	}
};

void someFunction(Animal* animal)
{
	animal->Sound();
	// dynamic_cast
	Dog* dog = dynamic_cast<Dog*>(animal);
	if (dog != nullptr)
	{
		dog->fooDog();
	}

	Tiger* tiger = dynamic_cast<Tiger*>(animal);
	if (tiger != nullptr)
	{
		tiger->fooTiger();
	}

}

void someFunctionByReference(Animal& animal)
{
	animal.Sound();
	try
	{
		Tiger& tiger = dynamic_cast<Tiger&>(animal);
		tiger.fooTiger();
	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast to tiger" << endl;
	}

	try
	{
		Dog& dog = dynamic_cast<Dog&>(animal);
		dog.fooDog();
	}
	catch (bad_cast cast)
	{
		cout << "Invalid cast to dog" << endl;
	}
}

void someFunctionTypeId(Animal* animal) 
{
	animal->Sound();
	const type_info& type = typeid(*animal);
	cout << type.name() << endl;
	if (type == typeid(Tiger))
	{
		static_cast<Tiger*>(animal)->fooTiger();
	}

	if (type == typeid(Dog))
	{
		reinterpret_cast<Dog*>(animal)->fooDog();
	}

	if (type == typeid(Cat))
	{
		((Cat*)animal)->fooCat();
	}
}

template<class T1, class T2>
T1* my_dynamic_cast(T2* value) {
	const type_info& type = typeid(*value);
	if (type == typeid(T1)) return (T1*)value;
	return nullptr;
}

int main()
{

	/*
		Typecasting:
		1. C style typecasting
		2. Static cast - static_cast<new_type>(expression) - polimorf olmayan casting-ler uchun
		3. Dynamic cast - dynamic_cast<new_type>(expression) - polimorf olan casting-ler uchun
		4. Const cast - const_cast<new_type>(expression)
		5. Reinterpret cast - reinterpet_cast<new_type>(expression)
	*/

	// dynamic_cast<new_type>(expression) - polimorf typecasting uchun

	Dog dog;
	Tiger tiger;
	/*someFunction(&dog);*/
	/*someFunction(&tiger);*/

	/*someFunctionByReference(tiger);
	someFunctionByReference(dog);*/

	/*someFunctionTypeId(&dog);*/
	Animal* animal = &dog;
	Tiger* tiger2 = my_dynamic_cast<Tiger>(animal);
	if (tiger2 != nullptr)
	{
		tiger2->fooTiger();
	}
}