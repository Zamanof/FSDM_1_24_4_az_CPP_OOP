#include<iostream>

using namespace std;

class Point 
{
public:
	int x;
	int y;
	Point() :x{ 0 }, y{0}
	{
		cout << "(Point) parameterless constructor" << endl;
	}
	Point(int x, int y) : x{ x }, y{y}
	{
		cout << "(Point) with parameter constructor" << endl;
	}
	void show()
	{
		cout << "Point(x=" << x << " ,y=" << y << ")" << endl;
	}
};

class Rectangle
{
public:
	Point leftUpperCorner;
	int width;
	int height;
	Rectangle()
		// initialize list
		: width{ 0 }, height{ 0 }, leftUpperCorner{ 0, 0 }
	{
		cout << "(Rectangle) parameterless constructor" << endl;
	}

	Rectangle(int x, int y, int width, int height)
		: width(width), height(height), leftUpperCorner(x, y)
	{
		cout << "(Rectangle) with parameters constructor" << endl;
	}

};

class BankAccount
{
public:
	float amount;
	const int percentage = 25;
	BankAccount(float amount, int percentage)
		: amount(amount), percentage(percentage)
	{}

	BankAccount(float amount) {};



	float finalAmount(int year) {
		return amount + amount * percentage / 100 * year;
	}

};

int main()
{
	//int number = 15; // copy initialize
	//
	//int number1{25}; // unify initialize
	//int* ptr{}; // int* ptr = nulptr;
	//int arr[5]{}; // int arr[5] = { 0,0,0,0,0 };

	//int number2(25); // direct initialize

	//cout << number2 << endl;


	/*Point point(5, 56);
	point.show();

	Point point1;
	point1.show();*/

	/*Rectangle rectangle;*/
	/*Rectangle rectangle1(15, 5, 25, 30);*/

	/*BankAccount account(15000.f, 15);
	cout << account.finalAmount(5) << endl;

	BankAccount account1(455000.f, 17);
	cout << account1.finalAmount(5) << endl;*/

}
