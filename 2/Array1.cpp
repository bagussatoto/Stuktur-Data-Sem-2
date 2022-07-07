#include <iostream>

using namespace std;

int main() {
	const int SIZE = 5;
	int my_array[SIZE] = {50, 55, 32, 20, 43};
	
	// menampilkan seluruh isi array:
	// 1. menggunakan for biasa
	//for(int i = 0; i < SIZE; ++i)
	//{
	//	cout << my_array[i] << '\n';
	//}
	
	// 2. menggunakan for .. each
	for(int a:my_array)
	{
		cout << a << '\n';
	}
	
	system("pause");
	
	return 0;
}
