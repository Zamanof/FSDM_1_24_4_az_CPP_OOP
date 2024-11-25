#include<iostream>
#include<list>

using namespace std;
template<class T>
void show(list<T> lst)
{
	cout << "List: " << endl;
	for (T item : lst) {
		cout << item << ' ';
	}
	cout << '\n';
}


int main() {
	list<int> lst;
	lst.push_back(36);
	lst.push_back(15);
	lst.push_back(99);
	lst.push_back(14);
	lst.push_back(41);
	lst.push_back(41);
	lst.push_back(41);
	lst.push_back(42);
	show(lst);
	lst.push_front(2554);
	show(lst);

	/*list<int>::iterator itera = lst.begin();
	cout << *itera << endl;
	++itera;
	++itera;
	cout << *itera << endl;
	lst.insert(itera, 77);
	show(lst);*/
	lst.unique();
	show(lst);
	lst.sort();
	show(lst);

}
