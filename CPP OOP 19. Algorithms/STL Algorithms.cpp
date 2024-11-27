#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class Cat {
public:
	string name;
	int age;
	int life;

	Cat(string name, int age, int life)
		:name(name), age(age), life(life)
	{}

	void show() const {
		cout << "Name:\t" << name << endl;
		cout << "Age:\t" << age << endl;
		cout << "Life:\t" << life << endl;
		cout << "\n\n";
	}
	bool operator ==(const Cat& other) {
		return age == other.age;
	}
	bool operator !=(const Cat& other) {
		return!(operator==(other));
	}
	bool operator>(const Cat& other) {
		return age > other.age;
	}
	bool operator<(const Cat& other) {
		return age < other.age;
	}

	bool operator>=(const Cat& other) {
		return age >= other.age;
	}
	bool operator<=(const Cat& other) {
		return age <= other.age;
	}

};

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
bool isEven(int numb);
bool isOdd(int numb);
bool life_compare(const Cat& left, const Cat& right);
void cat_show(const Cat& cat);

void make_negative(int& numb) {
	numb = numb > 0 ? -numb : numb;
}

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

	/*auto result = find_if(start, end, isNegative);
	if (result != end)
	{
		cout << "One or more prime numbers in this vector!" << endl;
	}
	else {
		cout << "Prime numbers not found in this vector!" << endl;
	}*/

#pragma endregion

#pragma region copy
	/*vector<int> new_numbers;
	copy(numbers.begin(), numbers.end() - 4, back_inserter(new_numbers));
	show(new_numbers);*/
#pragma endregion

#pragma region copy_if
	/*vector<int> prime_numbers;
	vector<int> negative_numbers;
	vector<int> even_numbers;
	vector<int> odd_numbers;*/
	/*copy_if(numbers.begin(), numbers.end(),
		back_inserter(prime_numbers), isPrime);
	show(prime_numbers);
	copy_if(numbers.begin(), numbers.end(),
		back_inserter(negative_numbers), isNegative);
	show(negative_numbers);*/
	/*copy_if(numbers.begin(), numbers.end(),
		back_inserter(even_numbers), isEven);
	show(even_numbers);

	copy_if(numbers.begin(), numbers.end(),
		back_inserter(odd_numbers), isOdd);
	show(odd_numbers);*/
#pragma endregion

#pragma region max_element, min_element
	/*cout << *(max_element(numbers.begin(), numbers.end())) << endl;
	cout << *(min_element(numbers.begin(), numbers.end())) << endl;*/
#pragma endregion

	vector<Cat> cats = {
		Cat("Garefild", 5, 3),
		Cat("Mestan", 3, 7),
		Cat("Neyva", 4, 9),
		Cat("Qarabala", 1, 9),
		Cat("Meska", 9, 1)
	};
	/*max_element(cats.begin(), cats.end(), life_compare)->show();
	min_element(cats.begin(), cats.end(), life_compare)->show();*/

	/*max_element(cats.begin(), cats.end())->show();
	min_element(cats.begin(), cats.end())->show();*/

	//sort(numbers.begin(), numbers.end());
	//show(numbers);
	/*sort(cats.begin(), cats.end());*/
	/*sort(cats.begin(), cats.end());*/
	/*sort(cats.begin(), cats.end(), life_compare);*/
	sort(cats.begin(), cats.end(), 
		[](const Cat& left, const Cat& right) {return left.life > right.life; });
	/*reverse(cats.begin(), cats.end());*/
	for (auto cat : cats)
	{
		cat.show();
	}
	
	/*for_each(numbers.begin(), numbers.end(), make_negative);
	for (int n : numbers) {
		cout << n << ' ';
	}
	cout << '\n';*/

	/*for_each(cats.begin(), cats.end(), cat_show);	*/
	

}

void cat_show(const Cat& cat) {
	cat.show();
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

bool isEven(int numb) {
	return numb % 2 == 0;
}
bool isOdd(int numb) {
	return numb % 2 != 0;
}

bool life_compare(const Cat& left, const Cat& right) {
	return left.life < right.life;
}
// [](const Cat& left, const Cat& right){return left.life < right.life;}