#include<iostream>

using namespace std;
// Abstract class
class Animal {
public:
	string name;
	// pure virtual method
	virtual void Sound() = 0;
};

class Mammal : public Animal {};

class Cat : public Mammal {
public:
	float price;
	void Sound() override
	{
		cout << name << " - Meow meow" << endl;
	}
	virtual void LifeIdea() = 0;

};

class CheshireCat : public Cat 
{
public:
	void Sound()override
	{
		cout << name << "- Smile" << endl;
	}
	void LifeIdea() override
	{
		cout << "Yoldan kechenlerin bashlarini aqilli sozlerle qatmaq" << endl;
	}

};


class PetCat : public Cat
{
public:
	
	void LifeIdea() override
	{
		cout << "Yeyib ichib yatmaq, oynamaq" << endl;
	}

};

class Dog : public Mammal {
public:
	void Sound()override
	{
		cout << name << "- Gaw gaw" << endl;
	}
	void Groom() {
		cout << "Aqilli it";
	}
};

void infoAnimal(Animal& animal) {
	cout << "This is " << animal.name << endl;
	animal.Sound();
}

void infoMammal(Mammal& mammal) {
	cout << "This is " << mammal.name << endl;
	mammal.Sound();
}

void infoCat(Cat& cat) {
	cout << "This is " << cat.name << endl;
	cat.Sound();
	cat.LifeIdea();
}

int main() {
	CheshireCat cheshire;
	cheshire.name = "Garefield";
	/*cheshire.Sound();
	cheshire.LifeIdea();*/

	PetCat cat;
	cat.name = "Mesi";
	/*cat.Sound();
	cat.LifeIdea();*/

	/*infoAnimal(cat);
	infoAnimal(cheshire);*/

	/*infoMammal(cat);*/

	/*infoCat(cheshire);*/

	Dog dog;
	dog.name = "Toplan";
	/*infoAnimal(dog);
	infoMammal(dog);*/

	Animal* animals[] = { &cat, &dog, &cheshire };
	Cat* cats[] = { &cat, &cheshire };

	for (auto animal : animals)
	{
		animal->Sound();
	}

}