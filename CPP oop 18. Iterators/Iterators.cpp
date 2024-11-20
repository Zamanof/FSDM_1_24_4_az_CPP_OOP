#include<iostream>

using namespace std;

int main() {
	const int length = 7;
	int arr[length]{ 2, 98, 4, 5, -56, 23, 0 };
	/*cout << *(&arr[3] - 1) << endl;*/
	/*for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';*/

	/*for (auto item : arr) {
		cout << item << ' ';
	}
	cout << '\n';*/

#pragma region iterators
	/*
	input - girish iteratorlari
			yaddashdan oxumaq uchun verilenleri unvanlayir
	==, !=, *i, ++i, i++, *i++

	output - chixish iteratorlari
			yaddasha yazilma uchun verilenleri unvanlayir
	 ++i, i++, *i = value, *i++ = value

	 forward - biristiqametli iteratorlar
				input ve output iteratorlarin xarakteristikalarina
				malikdir, choxluqun evvelinden sonuna yerdeyishme ede bilir
	
	
	bidirectional - ikiistiqametli iteratorlar
					input ve output iteratorlarin xarakteristikalarina
					malikdir, choxluqun evvelinden sonuna ve
					eksine yerdeyishme ede bilir
	==, !=, *i, ++i, i++, *i++, --i, i--, *i--

	random access - tesadufi icazeli iteratorlar
					ozunden evvelki 4 iteratorun xarakteristikalarina
					malikdir
	==, !=, *i, ++i, i++, *i++, --i, i--, *i--,
	i += n, i + n, i -= n, i - n, i1 - i2, i[n],
	i1 < i2, i1 <= i2, i1 > i2, i1 >= i2
	*/
#pragma endregion

}