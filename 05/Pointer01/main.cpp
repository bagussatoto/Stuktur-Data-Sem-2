#include <iostream>

using namespace std;

int main() 
{
	// deklarasi pointer
	// untuk alokasi dinamis
	int* p = new int;
	
	cout << "ukuran tipe int: " << sizeof(int) << endl;
	cout << "p menunjuk ke  : " << p << endl;
	
	// menyimpan nilai 
	*p = 9;
	cout << "*p menyimpan   : " << *p << endl;
	
	// dealokasi
	delete p;
	cout << "*p menyimpan   : " << *p << endl;
	
	return 0;
}
