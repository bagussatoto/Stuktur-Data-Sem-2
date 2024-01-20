/* 
 * Program: Pointer03
 * Demo pointer.
 *
*/

#include <iostream>

using namespace std;

int main()
{
	int x = 9;
	cout << "nilai  x: " << x << endl;
	cout << "alamat x: " << &x << endl;
	
	// deklarasi pointer
	// yang menunjuk ke alamat variabel x
	int *p = &x;
	cout << "p menunjuk ke: " << p << endl;
	cout << "nilai yg ditunjuk p: " << *p << endl;
	
	// mengubah isi x dari pointer p
	*p = 7;
	cout << "nilai x: " << x << endl;
	
	system("pause");
	
	return 0;
}
