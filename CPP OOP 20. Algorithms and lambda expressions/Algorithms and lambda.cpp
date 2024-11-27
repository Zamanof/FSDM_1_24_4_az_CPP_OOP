#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// functor - ozunu funksiya kimi aparan class ( () operatoru overload olunduqu uchun)
class Randint {
private:
	int start;
	int end;
public:
	Randint(int start, int end)
		:start(start), end(end)
	{}
	int operator()() {
		return rand() % (end - start + 1) + start;
	}

};

void show(const vector<int> vec) {
	for (int item : vec)
	{
		cout << item << ' ';
	}
	cout << '\n';
}

bool isEven(const int& numb) {
	return numb % 2 == 0;
}


int randint(int start,  int end) {
	return rand() % (end-start+1) + start;
}
int main() {
	srand(time(NULL));
	vector<int> numbers(20);

	/*for (size_t i = 0; i < numbers.size(); i++)
	{
		numbers[i] = randint(10, 99);
	}*/

	/*generate_n(numbers.begin(), 20, []() {return randint(10, 99); });*/
	/*generate_n(numbers.begin(), 20, Randint(10, 99));*/
	generate_n(numbers.begin(), 20, []() {return rand() % 90 + 10; });
	show(numbers);
	sort(numbers.begin(), numbers.end(), greater<int>());
	show(numbers);
	/*vector<int> evenNumbers;
	bool (*func)(const int&) = isEven;
	copy_if(numbers.begin(), numbers.end(),
		back_inserter(evenNumbers), func);
	show(evenNumbers);*/

	// anonymous functions - lambda expressions
	// [](){}
	/*bool (*func2)(const int&) = [](const int& numb) {return numb % 2 == 0; };
	cout << boolalpha << isEven(5) << endl;
	cout << boolalpha << func2(5) << endl;*/

	/*vector<int> oddNumbers;
	copy_if(numbers.begin(), numbers.end(),
		back_inserter(oddNumbers), [](int& n) {return n % 2 != 0; });
	show(oddNumbers);*/



	// [](int& n) {return n % 2 != 0; }
	/*
		class Noname{
		private:
			int n;
		public:
			Noname(int n): n(n){}
			bool operator()(){return n % 2 != 0;}
		}
	*/

	/*string hello = "hello world";*/
	/*auto upr_text = (char*)hello.c_str();
	_strupr_s(upr_text, hello.size() + 1);
	hello = string(upr_text);*/
	/*for_each(hello.begin(), hello.end(), [](char& s) {s = toupper(s); });
	cout << hello << endl;*/

	/*
		Arithmetic functor:
			plus			x+y
			minus			x-y
			multiplies		x*y
			divides			x/y
			modulus			x%y
			negate			-x
		Compare functors:
			equal_to		x=y
			not_equal		x!=y
			greater			x>y
			less			x<y
			grrater_equal	x>=y
			less_equal		x>=y
		Logical functor
			logical_and		x&&y
			logical_or		x||y
			logical_not		!x

	*/
}