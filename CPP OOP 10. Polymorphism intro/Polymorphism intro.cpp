#include<iostream>

using namespace std;
// Polymorphism
// static polymorphism -> function overloading, template functions, operator overloading

template <class T>
T add(T a, T b) {
	return a + b;
}

//int add(int a, int b) {
//	return a + b;
//}
//
//int add(int a, int b, int c) {
//	return a + b + c;
//}
//
//float add(float a, float b)
//{
//	return a + b;
//}
//
//float add(int a, float b) {
//	return a + b;
//}
//
//float add(float a, int b) {
//	return a + b;
//}


class Animal
{
public:
	string name;
	virtual void Sound() {
		cout << name << " - some sound" << endl;
	}
};

class Dog : public Animal
{
public:
	void Sound() override {
		cout << name << " -> haw-haw" << endl;
	}
};

class Cat : public Animal
{
public:
	void Sound() override {
		cout << name << " -> meaw" << endl;
	}
};

class CheshireCat : public Cat
{
public:
	void Sound() override {
		cout << name << " -> smile" << endl;
	}
};

//void info(Dog dog)
//{
//	cout << "This is " << dog.name << endl;
//	dog.Sound();
//}
//
//void info(Cat cat)
//{
//	cout << "This is " << cat.name << endl;
//	cat.Sound();
//}

//void info(Animal animal)
//{
//	cout << "This is " << animal.name << endl;
//	animal.Sound();
//}

void info(Animal* animal)
{
	cout << "This is " << animal->name << endl;
	animal->Sound();
}
void info(Animal& animal)
{
	cout << "This is " << animal.name << endl;
	animal.Sound();
}

int main() {
	// static polymorphism
	/*cout << add(1, 3) << endl;
	cout << add(1.5, 3.8) << endl;*/
	/*cout << add(1, 3, 87) << endl;
	cout << add(1.5f, 3) << endl;
	cout << add(1, 3.f) << endl;*/

	Dog dog;
	dog.name = "Alabash";
	/*dog.Sound();*/
	/*info(dog);*/

	Cat cat;
	cat.name = "Garfield";
	/*cat.Sound();*/
	/*info(cat);*/

	CheshireCat cheshire;
	cheshire.name = "Cheshire";
	/*cheshire.Sound();
	info(cheshire);*/

	// Pointer to base class
	Animal* dogP = new Dog();



	// Reference to base class
	Animal& catP = cat;
	Animal* cheshireP = new CheshireCat();
	cheshireP->name = "Salamamtliq";

	dogP->name = "Qarabash";
	/*dogP->Sound();*/
	/*info(dogP);
	info(cheshireP);*/

	Animal* animals[] = {dogP,  cheshireP};

	for (size_t i = 0; i < 2; i++)
	{
		animals[i]->Sound();
	}


	// virtual methods table

	// Abstract class
	// pure virtual methods
	// pure virtual constructor
	// pure virtual destructor
}