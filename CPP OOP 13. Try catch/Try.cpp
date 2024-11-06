#include<iostream>

using namespace std;

void foo(float numb1, float numb2)
{
	try {
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;
	}
	catch (float ex) {
		cout << "Error - divide by " << ex << endl;
	}
}

void bar(float numb1, float numb2) {
	if (numb2 == 0) throw numb2;
	cout << numb1 / numb2 << endl;
}

void some(float numb1, float numb2)
{
	try {
		if (numb2 == 0) throw numb2;
		cout << numb1 / numb2 << endl;
	}
	catch (float ex) {
		cout << "in function catch: Error - divide by " << ex << endl;
		throw "Divide by zero";
	}
}

int main()
{
	// try-catch-throw
	// exception
	/*
	try
	{
		throw exception;
	}
	catch
	{
		handled exception
	}

	*/

#pragma region try-catch
	/*cout << "Start of code" << endl;
	try
	{
		cout << "Before excepton" << endl;
		throw 13;
		cout << "After excepton" << endl;
	}
	catch (string ex)
	{
		cout << "String exception handled" << endl;
	}
	catch (int ex)
	{
		cout << "int exception handled" << endl;
	}*/

	// Division by zero exception
	/*float numb1{}, numb2{};
	cout << "Enter first number: " << endl;
	cin >> numb1;
	cout << "Enter second number: " << endl;
	cin >> numb2;
	try
	{
		if (numb2 == 0)	throw numb2;
		cout << numb1 / numb2 << endl;
	}
	catch (float ex)
	{
		cout << "Error - divide by " << ex << endl;
	}*/
#pragma endregion

#pragma region multi exception catch
	// catch(...) - universal exception
	/*try
	{
		int* arr{};
		int size{};
		cout << "Enter aray size:" << endl;
		cin >> size;
		if (size < 1 || size > 500) throw "size error";
		arr = new int[size];
		if (!arr) throw "Memmory allocation error";

		int number{};
		cout << "Enter any number:" << endl;
		cin >> number;
		if (number == 0) throw number;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = number;
		}

		float value;
		cout << "Enter any number:" << endl;
		cin >> value;
		if (value == 0.f) throw value;
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] / value << endl;
		}

	}
	catch (const char* ex)
	{
		cout << ex << endl;
	}
	catch (int ex) 
	{
		cout << "Zero value" << endl;
	}
	catch (...)
	{
		cout << "Other exception" << endl;
	}*/
#pragma endregion

#pragma region fucnction exceptions
/*foo(25, 0);*/
	//try
	//{
	//	/*bar(25, 0);*/
	//	some(6, 0);
	//}
	//catch (float ex)
	//{
	//	cout << "in main catch: Error - divide by " << ex << endl;
	//}
	//catch (const char* ex) {
	//	cout << "in main catch: " << ex << endl;
	//}
#pragma endregion

	// namespace
	// Cast 
	// const cast, 
	// dynamic cast, 
	// reinterpreted cast, 
	// static cast
}