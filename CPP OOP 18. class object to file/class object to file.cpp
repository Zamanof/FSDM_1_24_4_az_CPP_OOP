#include<iostream>
#include<fstream>

using namespace std;

class Human {
private:
	string name;
	string surname;
	int age;
public:
	Human();
	Human(string name, string surname, int age);

	void Put();
	void Show();
	void SaveToFile();
	static void ShowFromFile();
};

Human::Human()
	:name(string()), surname(string()), age(0)
{}

Human::Human(string name, string surname, int age)
	:name(name), surname(surname), age(age)
{}

void Human::Put() {
	cout << "Enter your name:" << endl;
	cin >> name;
	cout << "Enter your surname:" << endl;
	cin >> surname;
	cout << "Enter your age:" << endl;
	cin >> age;
}

void Human::Show() {
	cout << "Name:\t\t" << name << endl;
	cout << "Surname:\t" << surname << endl;
	cout << "Age:\t\t" << age << endl;
	cout << "-----------------------------------" << endl;
}

void Human::SaveToFile() {
	fstream file("human.txt", ios::out | ios::app | ios::binary);
	if (!file) {

	}

}

int main() {
	//unsigned char number1 = 5;				// 0 0 0 0 0 1 0 1
	//unsigned char number2 = 3;				// 0 0 0 0 0 0 1 1
	//										
	//cout << (number1 & number2) << endl;	// 0 0 0 0 0 0 0 1
	//cout << (number1 | number2) << endl;	// 0 0 0 0 0 1 1 1
	//cout << (number1 ^ number2) << endl;	// 0 0 0 0 0 1 1 0

	
	cout << (ios::out | ios::app | ios::binary) << endl;

	// 0 0 0 0 0 0 1 0
	// 0 0 0 0 1 0 0 0
	// 0 0 1 0 0 0 0 0

	// 0 0 1 0 1 0 1 0



}