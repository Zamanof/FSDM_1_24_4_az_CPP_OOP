#include<iostream>
#include<map>
#include<vector>

using namespace std;

template<class K, class V>
void show(map<K, V> mp) {
	/*for (auto item: mp)
	{
		cout << "Key = " << item.first
			<< " value = " << item.second << endl;
	}*/

	for (auto i = mp.begin(); i != mp.end() ; i++)
	{
		cout << "Key = " << i->first
			<< " value = " << i->second << endl;
	}

}

int main() {
	map<int, int> mp;
	
	/*cout << mp.max_size() << endl;*/

	/*int value{}, key{};
	cout << "Enter key: ";
	cin >> key;
	cout << "Enter value: ";
	cin >> value;*/

	/*pair<int, int> element(key, value);
	mp.insert(element);
	show(mp);
	cout << mp[6] << endl;*/
	//mp.insert(make_pair(-48, 3654));
	///*show(mp);*/
	mp[12] = 65;
	mp[12] = 1235;
	show(mp);

	/*map<string, vector<int>> new_map;
	vector<int> vec{ 25, 78, 98 };
	new_map["first"] = vec;
	new_map["second"] = { 35, 87, 156, 9 };

	for (size_t i = 0; i < new_map["second"].size(); i++)
	{
		cout << new_map["second"][i] << ' ';
	}
	cout << endl;*/

	map<vector<int>, int> my_map;
	my_map[{2, 3}] = 689;
	cout << my_map[{2, 3}] << endl;
}