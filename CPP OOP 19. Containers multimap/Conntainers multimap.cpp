#include<iostream>
#include<map>

using namespace std;


void show(multimap<string, int> mmp)
{
	for (auto item : mmp) {
		cout << "City:\t\t" << item.first << endl;
		cout << "Car index:\t" << item.second << endl<<endl;
	}
}

int main() {
	multimap<string, int> cityCarIndex;
	cityCarIndex.insert(make_pair("Baku", 10));
	cityCarIndex.insert(pair<string, int>("Sumgait", 50));
	cityCarIndex.insert(make_pair("Bilasuvar", 12));
	cityCarIndex.insert(make_pair("Ganja", 20));
	cityCarIndex.insert(make_pair("Goranboy", 22));
	cityCarIndex.insert(make_pair("Gubadli", 39));
	cityCarIndex.insert(make_pair("Baku", 90));
	cityCarIndex.insert(make_pair("Baku", 77));
	cityCarIndex.insert(make_pair("Baku", 99));

	/*show(cityCarIndex);*/

	for (
		auto i = cityCarIndex.lower_bound("Baku");
		i != cityCarIndex.upper_bound("Baku");
		i++	
		)
	{
		cout << "City:\t\t" << i->first << endl;
		cout << "Car index:\t" << i->second << endl << endl;
	}
	cout << cityCarIndex.count("Baku") << endl;


}