#include <iostream>

using namespace std;

bool seq_search(int key, int array[], int size);

int main() 
{
	const int SIZE = 10;
	int my_array[SIZE] = {9, 14, 12, 56, 23, 76, 86, 55, 19, 10};
	
	int key_srch;
	cout << "cari: ";
	cin >> key_srch;
	
	if(seq_search(key_srch, my_array, SIZE))
		cout << "data ditemukan\n";
	else
		cout << "data tidak ditemukan\n";
	
	return 0;
}

bool seq_search(int key, int array[], int size)
{
	for(int i = 0; i < size; ++i)
		if(key == array[i])
			return true;
			
	return false;
}
