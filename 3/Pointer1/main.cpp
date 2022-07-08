/*
 * Program: Pointer01
 * demo membaca alamat memori dari variabel
 *
*/

#include <iostream>

using namespace std;

int main()
{
	int x = 9;
	
	cout << "nilai  x: " << x << endl;
	// notasi &x akan membaca alamat dari x
	cout << "alamat x: " << &x << endl;
	
	system("pause");
	
	return 0;
}
