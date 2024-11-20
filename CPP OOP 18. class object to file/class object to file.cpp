#include<iostream>
#include<fstream>
#include<vector>

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
		cout << "File doesn't open for write!!!" << endl;
		exit(1);
	}
	int nameLength = name.length();
	int surnameLength = surname.length();
	file.write((char*)&age, sizeof(int));
	file.write((char*)&nameLength, sizeof(int));
	file.write(name.c_str(), nameLength);
	file.write((char*)&surnameLength, sizeof(int));
	file.write(surname.c_str(), surnameLength);
	file.close();




	file.close();

}

void Human::ShowFromFile() {
	Human tmp{};
	int nameLength{};
	int surnameLength{};
	char* name, * surname;
	fstream file("human.txt", ios::in | ios::binary);
	if (!file) {
		cout << "File doesn't open for open!!!" << endl;
		exit(1);
	}
	file.read((char*) & tmp.age, sizeof(int));
	file.read((char*) & nameLength, sizeof(int));
	name = new char[nameLength + 1] {};
	file.read(name, nameLength);
	file.read((char*) & surnameLength, sizeof(int));
	surname = new char[surnameLength + 1] {};
	file.read(surname, surnameLength);
	file.close();
	tmp.name = string(name);
	tmp.surname = string(surname);
	tmp.Show();
}

int main() {
#pragma region Bitwise operators and, or, xor
	//	bitwise and &
	// 1 & 1 = 1
	// 1 & 0 = 0
	// 0 & 1 = 0
	// 0 & 0 = 0
	
	//	bitwise and |
	// 1 | 1 = 1
	// 1 | 0 = 1
	// 0 | 1 = 1
	// 0 | 0 = 0

	//	bitwise xor ^
	// 1 ^ 1 = 0
	// 1 ^ 0 = 1
	// 0 ^ 1 = 1
	// 0 ^ 0 = 0
	
	//unsigned char number1 = 5;				// 0 0 0 0 0 1 0 1
	//unsigned char number2 = 3;				// 0 0 0 0 0 0 1 1
	

	// 									
	//cout << (number1 & number2) << endl;	// 0 0 0 0 0 0 0 1
	//cout << (number1 | number2) << endl;	// 0 0 0 0 0 1 1 1
	//cout << (number1 ^ number2) << endl;	// 0 0 0 0 0 1 1 0
	


	/*cout << (ios::out | ios::app | ios::binary) << endl;*/

	// 0 0 0 0 0 0 1 0
	// 0 0 0 0 1 0 0 0
	// 0 0 1 0 0 0 0 0

	// 0 0 1 0 1 0 1 0
	

	 //xor example - sade shifreleme
	/*string password = "P@ss12345";
	int key{};
	cin >> key;
	for (size_t i = 0; i < password.length(); i++)
	{
		password[i] ^= key;
	}
	cout << password << endl;

	cin >> key;
	for (size_t i = 0; i < password.length(); i++)
	{
		password[i] ^= key;
	}
	cout << password << endl;*/
#pragma endregion

#pragma region Bitwise shift operators
	// << - left shift
	unsigned int numb = 27;
	/*cout << (numb << 2) << endl;*/

	
	// >> - right shift
	/*cout << (numb >> 3) << endl;*/
	

#pragma endregion


#pragma region Binary file
/*int arr[5]{ 5, 98, 8, 7, 97 };
	fstream file("array.txt", ios::out | ios::binary);
	file.write((char*)&arr, sizeof(arr));
	file.close();*/

	/*int arr2[5]{};
	fstream file("array.txt", ios::in | ios::binary);
	file.read((char*)&arr2, sizeof(arr2));
	file.close();
	for (size_t i = 0; i < 5; i++)
	{
		cout<< arr2[i] << endl;
	}*/
#pragma endregion

	/*Human human1("Nadir", "Zamanov", 44);
	human1.Show();
	human1.SaveToFile();*/

	Human::ShowFromFile();

	
}