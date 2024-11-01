#include<iostream>

using namespace std;
class Enclosing {
private:
	int outerValue = 2;

	class Inner
	{
	private:
		int innerValuePrivate = 125;
	public:
		int innerValuePublic = 78;
		void showInnerValues();
		void showOuterValues(Enclosing* enclose);

	};

public:
	void showOuterValue();

	Inner innerObject;
};


void Enclosing::showOuterValue()
{
	cout << "outerValue = " << outerValue << endl;
}

void Enclosing::Inner::showInnerValues() {
	cout << "innerValuePublic = " << innerValuePublic << endl;
	cout << "innerValuePrivate = " << innerValuePrivate << endl;
}

void Enclosing::Inner::showOuterValues(Enclosing* enclose) {
	cout << "outerValue = " << enclose->outerValue << endl;
}

int main() {
	Enclosing enclose;
	enclose.showOuterValue();
	enclose.innerObject.showInnerValues();

	// Inner class-in bu shekilde obyektini yaratmaq mumkundur amma meslehet deyil
	// nested class ideyasi pozulur
	/*Enclosing::Inner innerobj;*/

}