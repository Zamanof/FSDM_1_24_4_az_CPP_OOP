#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

enum
{
	CHOICE = 3,
	INPUT_FILENAME,
	INPUT_DIMENSION,
	INPUT_ELEMENTS,
	FILE_ERROR
};

int main() {
	char choice;
	const int MENU_COUNT = 8;
	int i{}, j{};

	string Menu[MENU_COUNT]
	{
		"1. Read data from file\n",
		"2. Write data in file\n",
		"3. Exit\n",
		"Your choice\n",
		"Enter file name\n",
		"Enter array size\n",
		"Enter array element\n",
		"File can not open\n"
	};

	do
	{
		for (size_t i = 0; i < 3; i++)
		{
			cout << Menu[i];
		}
		cout << Menu[CHOICE];
		cin >> choice;
		system("cls");
	} while (choice < '1' || choice > '3');

	if (choice == '3') return 0;

	string fileName;
	int M{}, N{};
	int number;
	cout << "\n" << Menu[INPUT_FILENAME];
	cin >> fileName;
	ifstream inFile(fileName, ios::in | ios::_Nocreate);

	switch (choice)
	{
	case '1':
		if (!inFile) {
			cout << Menu[FILE_ERROR]; 
			return 0;
		}
		inFile >> M;
		inFile >> N;
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				inFile >> number;
				cout << setw(6) << number;
			}
			cout << '\n';
		}
		inFile.close();
		break;
	case '2':
		ofstream outFile(fileName, ios::out);
		if (!outFile) {
			cout << Menu[FILE_ERROR];
			return 0;
		}
		cout << Menu[INPUT_DIMENSION];
		cout << "M: ";
		cin >> M;
		cout << "N: ";
		cin >> N;

		outFile << M << ' ' << N << '\n';
		cout << Menu[INPUT_ELEMENTS];
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				cout << "Array[" << i << "][" << j << "] = ";
				cin >> number;
				outFile << number << ' ';
			}
			outFile << '\n';
		}
		outFile.close();
		break;
	}
}