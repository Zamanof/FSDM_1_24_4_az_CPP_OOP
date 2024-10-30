#include<iostream>

using namespace std;

void bubbleSorting(int* arr, int length, bool (*func)(int, int)) {
	for (size_t i = 0; i < length-1; i++)
	{
		for (size_t j = i; j < length; j++)
		{
			if (func(arr[i], arr[j])) {
				swap(arr[i], arr[j]);
			}

		}
	}
}

bool GreaterThan(int a, int b) {
	return a > b;
}

bool LessThan(int a, int b) {
	return a < b;
}

void showArr(int* arr, int length) {
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = { 2,98,-1,55,15,23,78 };
	bubbleSorting(arr, 7, GreaterThan);
	showArr(arr, 7);
	bubbleSorting(arr, 7, LessThan);	
	showArr(arr, 7);


}