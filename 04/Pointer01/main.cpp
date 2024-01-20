/*
 * Demo penggunaan parameter / argumen:
 * by value, by reference, by pointer
 *
 *
*/

#include <iostream>

using namespace std;

// fungsi swap, untuk menukar 2 variabel
void swap1(int a, int b);		// by value
void swap2(int& a, int& b);		// by reference
void swap3(int* a, int* b);		// by pointer

int main() 
{
	int x = 7;
	int y = 9;
	
	cout << "x: " << x << ", y: " << y << endl;
	
	// setelah ditukar
	swap3(&x, &y);
	cout << "x: " << x << ", y: " << y << endl;
	
	return 0;
}

void swap1(int a, int b)
{
	int c = b;
	b = a;
	a = c;
}

void swap2(int& a, int& b)
{
	int c = b;
	b = a;
	a = c;
}

void swap3(int* a, int* b)
{
	int c = *b;
	*b = *a;
	*a = c;
}





