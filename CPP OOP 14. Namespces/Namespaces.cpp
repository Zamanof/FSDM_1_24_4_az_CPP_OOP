#include<iostream>
#include"combat1.h"
#include"combat2.h"

using namespace std;

int number = 78;
void fire() {
	cout << "Fire in gloabal" << endl;
}
namespace exploration
{
	int number = 25;
	void fire() {
		cout << "Fire in exploration" << endl;
	}
}

namespace
{
	void function() {
		cout << "Function" << endl;
	}
}


int main() {
	/*cout << number << endl;*/
	fire();
	exploration::fire();
	combat::fire();
	cout << combat::number << endl;
	::function();
}