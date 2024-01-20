#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	const int SIZE = 10;
	int my_array[SIZE] = {9, 14, 12, 56, 23, 76, 86, 55, 19, 10};
	
	int key_srch;
	cout << "cari: ";
	cin >> key_srch;
	
	// melakukan pencarian, dan hasilnya disimpan di
	// variabel f
	auto f = find(begin(my_array), end(my_array), key_srch);
	
	if(f != end(my_array))
		cout << "data ditemukan\n";
	else
		cout << "data tidak ditemukan\n";
	
	return 0;
}
