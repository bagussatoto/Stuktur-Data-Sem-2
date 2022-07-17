#include <iostream>
#include "flist.h"

using namespace std;

int main()
{
	ForwardList list;
	
	list.push_front('t');
	list.push_front('h');
	list.push_front('e');
	list.push_front('q');
	list.push_front('u');
	list.push_front('i');
	list.push_front('c');
	list.push_front('k');
	
	// membaca isi list
	Node* it = list.begin();
	
	
	while(it)
	{
		cout << it->_elm << "";
		it = it->_next;
	}
	
    list.pop_front();
    
	return 0;
}







