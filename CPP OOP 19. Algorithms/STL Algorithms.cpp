#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

template<class T>
void show(vector<T>& vec)
{
	for (auto item : vec) {
		cout << item << " ";
	}
	cout << '\n';
}

bool isPrime(int numb);
bool isNegative(int numb);

int main() {
	// STL Algorithms
	vector<int> numbers{ 15,32, 13, 1, -78, 99, -12, 0, 17 };
	auto start = numbers.begin();
	auto end = numbers.end();

	show(numbers);

#pragma region find
	// find
	/*int numb{};
	cout << "Enter any number for search in vector: ";
	cin >> numb;

	auto result = find(start, end, numb);
	if (result != end) {
		cout << *result << " in this vector!" << endl;
	}
	else
	{
		cout << numb << " is not found!" << endl;
	}*/

#pragma endregion
#pragma region find_if
	/*for (auto item : numbers)
	{
		if (isPrime(item)) {
			cout << item << " is prime number" << endl;
		}
	}*/

	auto result = find_if(start, end, isNegative);
	if (result != end)
	{
		cout << "One or more prime numbers in this vector!" << endl;
	}
	else {
		cout << "Prime numbers not found in this vector!" << endl;
	}

#pragma endregion


}

bool isPrime(int numb) {
	if (numb <= 1) return false;
	for (size_t i = 2; i <= numb / 2; i++)
	{
		if (numb % i == 0) return false;
	}
	return true;
}

bool isNegative(int number)
{
	return number < 0 ? true : false;
}