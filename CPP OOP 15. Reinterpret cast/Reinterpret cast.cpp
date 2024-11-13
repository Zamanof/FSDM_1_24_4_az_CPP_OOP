#include<iostream>

using namespace std;

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


	// reinterpret_cast<new_type>(expression)
	// proqramlashdirma noqteyi nezerinden (mentiqine gore) duzgun olmayan typecasting yerine yetirmek
	// uchundur (static_cast-dan ferqli olaraq yoxlamasi yoxdur)

	double value = 3.14;
	double* ptrValue = &value;

	int* why = (int*)ptrValue; // c-style cast
	int* whyWhy = reinterpret_cast<int*>(ptrValue); // c++ style
	
	int whyWhyWhy = (int)ptrValue; // c-style cast
	int whyWhyWhyWhy = reinterpret_cast<int>(ptrValue); // c++ style

	cout << why << endl;
	cout << whyWhy << endl;
	cout << whyWhyWhy << endl;
	cout << whyWhyWhyWhy << endl;
}