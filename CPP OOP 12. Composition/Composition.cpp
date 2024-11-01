#include<iostream>

using namespace std;

class Point {
private:
public:
	int x;
	int y;
	Point(int x, int y) :x(x), y(y)
	{
		cout << "Point(" << x << ", " << y << ") was created" << endl;
	}

	void change(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	~Point()
	{
		cout << "Point(" << x << ", " << y << ") was deleted" << endl;
	}
};

class Image
{
private:
	string name;
	int width;
	int height;
	Point position;
public:
	Image(string name, int width, int height, int x, int y)
		:name(name), width(width), height(height), position(Point(x, y))
	{
		cout << "Image " << name << ".png was created" << endl;
	}
	~Image()
	{
		cout << "Image " << name << ".png was delted" << endl;
	}

	void moveTo(int x, int y) {
		cout << "Image " << name << ".png was moved to point(" << x << ", " << y << ")" << endl;
	}

};


int main() {
	/*
			Relations - elaqeler
		is			- inhertiance
		has			- Aggregation, Composition
		depends on	- asilidir
		uses		- istifade edir
		part-whole	- Nested classes
	*/

	/*
			Composition
		1. "Hisse" obyekt "Butov" obyektin terkibine daxilidir;
		2. "Hisse" obyekt yalniz bir "Butov" obyekte aid ola biler
		3. "Hisse" obyekt "Butov" obyektsiz movcud deyil 
			ve Butov" obyekt "Hisse" obyekti idare edir, onun varliqina cavabdehdir
		4. "Hisse" obyektin "Butov" obyekt haqqinda hech bir informasiyasi yoxdur

	*/

	Image image1("Mona Liza", 53, 76, 0, 0);
	{
		Image image2("Sonuncu sham yemeyi", 100, 100, 15, 36);
		
	}


}