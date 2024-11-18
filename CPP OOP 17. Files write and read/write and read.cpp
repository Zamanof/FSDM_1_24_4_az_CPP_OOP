#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	// text write to file
	/*string str = "Lorem ipsum dolor sit amet!!!";
	ofstream out;
	out.open("data.txt", ios::app);
	if (out.is_open()) {
		out << str << endl;
	}
	out.close();*/

	// text read from file
	/*string line;
	ifstream in("data.txt");
	if (in.is_open())
	{
		while (getline(in, line)) {
			cout << line << endl;
		}
	}
	in.close();*/

	/*int number = 25;
	ofstream output("number.txt");
	if (output.is_open()) {
		output << number;
	}
	output.close();*/

	int numb;
	ifstream input("number.txt");
	if (input.is_open());
	input >> numb;
	input.close();
	cout << numb<<endl;

}