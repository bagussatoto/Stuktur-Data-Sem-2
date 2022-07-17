#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
	//for(int i = 0; i < 256; ++i)
	//{
	//	cout << "Kode [" << i << "]\t" << char(i) << endl;
	//}
	system("pause");
	system("cls");
	
	cout << "\n\n\t\t";
	for(int i = 0; i < 25; ++i)
	{
		cout << char(178);
		Sleep(250);
	}
	
	cout << endl;
	system("pause");
	
	return 0;
}
