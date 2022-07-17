#include <iostream>
#include <string>

using namespace std;

int main()
{
	while(true)
	{	
		system("cls");
		cout << "-- Demo Menu --\n";
		cout << "  [1] Menu 1\n";
		cout << "  [2] Menu 2\n";
		cout << "  [3] Menu 3\n";
		cout << "  [4] Keluar\n";
		cout << "  pilih: ";
		
		string pilih;
		getline(cin, pilih);
		
		switch(pilih[0])
		{
			case '1':
				system("cls");
				cout << "Menghitung luas lingkaran\n";
				// dst..
				system("pause");
				break;
			case '2':
				system("cls");
				cout << "Menghitung luas segitiga\n";
				// dst..
				system("pause");
				break;
			case '3':
				system("cls");
				cout << "Menghitung luas segiempat\n";
				// dst..
				system("pause");
				break;
			case '4':
				exit(0);	
		}
	}
	
	return 0;
}
