/*
 * Program: Pointer02
 * Demo penggunaan reference
*/

#include <iostream>

using namespace std;

int main() {
	int x = 9;
	cout << "Nilai x: " << x << endl;
	
	// notasi &y menyatakan bahwa y adalah alias dari x
	// (reference)
	int &y = x;
	cout << "Nilai y: " << y << endl;
	
	x = 7;
	cout << "Nilai x: " << x << endl;
	cout << "Nilai y: " << y << endl;
	
	cout << "Alamat x: " << &x << endl;
	cout << "Alamat y: " << &y << endl;
	
	system("pause");	
	
	return 0;
}
