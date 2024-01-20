#include <iostream>
#include <string>

using namespace std;

struct Presence 
{
	string NIM;
	string nama;
	string timestamp;
};

int main() 
{
	Presence pres{"02.11.0127", "John Doe", "2022-05-31 10:05:00"};
	
	// show
	cout << pres.NIM << '\t' << pres.nama << '\t' << pres.timestamp;
	
	return 0;
}
