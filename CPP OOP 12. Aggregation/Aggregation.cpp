#include<iostream>

using namespace std;

class Address
{
private:
	string city;
	string street;
	int house;
	int apartment;
public:
	Address(string city, string street, int house, int apartment = 0)
		:city(city), street(street), house(house), apartment(apartment)
	{
		cout << "Address was created" << endl;
	}

	void show() {
		cout << "City:\t\t" << city << ';' << '\n';
		cout << "Street:\t\t" << street << ';' << '\n';
		cout << "House:\t\t" << house << ';' << '\n';
		if (apartment != 0) {
			cout << "Apartment:\t" << apartment << ';' << endl;
		}
	}
	~Address()
	{
		cout << "Address was deleted" << endl;
	}
};

class Student {
private:
	string firstname;
	string lastname;
	int age;
	float averScore;
	Address& address;
public:
	Student(string firstname, string lastname, 
		int age, float averScore, Address& address)
		:firstname(firstname), lastname(lastname), 
			age(age), averScore(averScore), address(address)
	{
		cout << "Student was created" << endl;
	}
	void show() {
		cout << "Helo I am " << firstname << ' ' << lastname << endl;
		cout << "I am " << age << " years old" << endl;
		cout << "My address:\n";
		address.show();
	}
	~Student()
	{
		cout << "Student was deleted" << endl;
	}
};

class Teacher {
private:
	string firstname;
	string lastname;
	int age;
	float salary;
	Address& address;
public:
	Teacher(string firstname, string lastname,
		int age, float salary, Address& address)
		:firstname(firstname), lastname(lastname),
		age(age), salary(salary), address(address)
	{
		cout << "Teacher was created" << endl;
	}
	void show() {
		cout << "Helo I am " << firstname << ' ' << lastname << endl;
		cout << "I am " << age << " years old" << endl;
		cout << "My address:\n";
		address.show();
	}
	~Teacher()
	{
		cout << "Teacher was deleted" << endl;
	}
};

int main() {
	/* 
			Relations - elaqeler
		is			- inhertiance
		has			- Aggregation, Composition
		depends on	- asilidir
		uses		- istifade edir
		part-whole	- Nested classes
	*/

	/*
			Aggregation
		1. "Hisse" obyekt "Butov" obyektin terkibine daxilidir;
		2. "Hisse" obyekt bir neche "Butov" obyekte aid ola biler
		3. "Hisse" obyekt "Butov" obyektden kenarda movcud ola biler
		4. "Hisse" obyektin "Butov" obyekt haqqinda hech bir informasiyasi yoxdur
	
	*/

	Address address("Absheron", "Saray MTK", 70, 10);
	{ 
		Teacher teacher("Nadir", "Zamanov", 44, 2569874.f, address); 
	}
	Student student("Ayan", "Zaman", 11, 11.5, address);

	student.show();
	
}