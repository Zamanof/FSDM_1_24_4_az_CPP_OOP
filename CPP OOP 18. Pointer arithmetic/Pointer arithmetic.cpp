#include<iostream>

using namespace std;

int main() {
	// Pointerler arasinda istifade oluna bilen riyazi emeliyyatlar  
	// pointer + n -> n qeder unvan saqa surusme 
	// pointer - n -> n qeder unvan sola surusme
	// pointer1 - pointer2 -> pointerler arasinda "mesafe"
	// pointer++, ++pointer, pointer--, --pointer
	// pointer += n, pointer -= n
	int a = 25, b = 2658;
	int* ptrA = &a, * ptrB = &b;

	/*cout << ptrA << endl;
	cout << ptrB << endl;*/
	cout << ptrA - ptrB << endl;

	ptrB -= 8;
	*ptrB = 32;
	cout << a << endl;
	cout << b << endl;

}