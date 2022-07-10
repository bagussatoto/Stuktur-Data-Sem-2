#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
	// alokasi array secara dinamis
	int* p = new int[5];
	
	cout << "p menunjuk ke : " << p << endl;
	// mengisi array dengan angka acak
	// antara 0 - 19
	srand(time(NULL));
	for(int i = 0; i < 5; ++i)
	{
		p[i] = rand() % 20;
	}
	
	// menampilkan isi array
	for(int i = 0; i < 5; ++i)
	{
		cout << p[i] << endl;
	}
	
	delete [] p;
	
	return 0;
}
