#include <iostream>
#include <vector>
#include <string>

#include "presence.h"

using namespace std;

int main() 
{
	vector<Presence> pres;
	
	// input:
	for(;;)
	{
		system("cls");
		
		string nim, nama, time_s;
		
		cout << "NIM  : ";
		getline(cin, nim);
		
		// filter, bila NIM kosong,
		// hentikan input
		if(nim == "")
			break;
		
		cout << "Nama : ";
		getline(cin, nama);
		
		cout << "Waktu: ";
		getline(cin, time_s);
		
		pres.push_back({nim, nama, time_s});
	}
	
	// show:
	system("cls");
	for(auto p:pres)
	{
		cout << p.NIM << '\t';
		cout << p.nama << '\t';
		cout << p.timestamp << '\n';
	}
	
	return 0;
}
