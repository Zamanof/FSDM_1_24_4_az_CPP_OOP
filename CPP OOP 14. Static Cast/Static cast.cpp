#include<iostream>

using namespace std;

int main() {
	/*
		Typecasting:
		1. C style typecasting
		2. Static cast - static_cast<new_type>(expression) - polimorf olmayan casting-ler uchun
		3. Dynamic cast - dynamic_cast<new_type>(expression) - polimorf olan casting-ler uchun
		4. Const cast - const_cast<new_type>(expression)
		5. Reinterpret cast - reinterpet_cast<new_type>(expression)
	*/

#pragma region C style cast
	/*float price = 25.5f;
	char symbol = (char)65;
	int number = int(price);
	cout << symbol << endl;
	cout << number << endl;
	int numbe = 'U';*/
#pragma endregion

#pragma region static cast
	double number1 = 36.6;
	/*int number2 = static_cast<int>(number1);
	cout << number2 << endl;*/

	int numb1 = 5;
	int numb2 = 10;
	/*float result = numb1 / static_cast<float>(numb2);
	cout << result << endl;*/

	int* ptrA = &numb1;
	double* ptrDbl = (double*)ptrA;
	double* ptrDouble = static_cast<double*>(ptrA);
	cout << *ptrDbl << endl;

#pragma endregion

	// smart pointers
}