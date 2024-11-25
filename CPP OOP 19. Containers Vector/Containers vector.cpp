#include<iostream>
#include<vector>

using namespace std;

template<class T>
void showSizeAndCapacity(const vector<T>& vec) {
	cout << "Size:\t\t" << vec.size()<<endl;
	cout << "Capacity:\t" << vec.capacity()<<endl;
	cout << '\n';
}

int randint(int start, int end) {
	return rand() % (end - start + 1) + start;
}

template<class T>
void show(vector<T>& vec)
{
	// at()
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}*/

	// []

	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}*/
	// iterators
	/*for (auto i = vec.begin(); i < vec.end(); i++)
	{
		cout << *i << " ";
	}*/

	for (auto item : vec) {
		cout << item << " ";
	}
	cout << '\n';
}

int main() {
	srand(time(NULL));
	vector<int> vec;
	vector<double> vec1;
	cout << vec.max_size() << endl;
	cout << vec1.max_size() << endl;
	/*showSizeAndCapacity(vec);*/
	//for (size_t i = 0; i < 20; i++)
	//{
	//	vec.push_back(randint(10, 99));
	//	/*showSizeAndCapacity(vec);*/
	//}
	/*show(vec);*/
	/*vec.clear();*/
	/*showSizeAndCapacity(vec);*/
	/*cout << vec[2] << endl;*/
	/*vec.shrink_to_fit();
	showSizeAndCapacity(vec);*/

	/*cout << boolalpha << vec.empty() << endl;*/

	/*auto begin_itera = vec.begin();
	auto end_itera = vec.end();
	auto r_itera = vec.rbegin();*/
	/*cout << *(vec.rend() - 1) << endl;
	cout << *vec.rbegin() << endl;*/

	/*for (auto i = vec.rbegin(); i < vec.rend(); i++)
	{
		cout << *i << " ";
	}
	cout << '\n';*/

	/*cout << (vec.end() - vec.begin()) << endl;*/

	/*vec.insert((vec.begin() + 5), 2568);
	show(vec);*/

}