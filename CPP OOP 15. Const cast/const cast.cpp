#include<iostream>

using namespace std;
void foo(const int* number1, const int& number2, int* number3)
{
	/*int* fooNumber1 = const_cast<int*> (number1);
	*fooNumber1 = 364;*/

	/**(const_cast<int*> (number1)) = 65;
	const_cast<int&>(number2) = 18;

	const int* fooNumber3 = const_cast<const int*>(number3);
	*fooNumber3 = 46;*/

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

	// const_cast<new_type>(expression) - konstantliq elave etmek ve silmek uchundur

	// evvelceden const olan sade deyishenlerin konstantliqin elinden almaq mumkun deyil
	/*const int number = 25;
	const_cast<int>(number) = 36;*/

	// konstant olmayan sade deyishene konstantliq elave etmek de mumkun deyil

	// const_cast yalniz reference ve pointerler ile ishleyir

	int number1 = 10;
	int number2 = 15;
	int number3 = 658;

	// Before function calling
	cout << "Before function calling: " << endl;
	cout << "number1 = " << number1 << endl;
	cout << "number2 = " << number2 << endl;
	cout << "number3 = " << number3 << endl;

	foo(&number1, number2, &number3);

	// After function calling
	cout << "After function calling: " << endl;
	cout << "number1 = " << number1 << endl;
	cout << "number2 = " << number2 << endl;
	cout << "number3 = " << number3 << endl;

}