#include <iostream>
#include "queue.h"

using namespace std;

int main() 
{
	Queue myq;
	
	myq.push('t');
	myq.push('h');
	myq.push('e');
	
	cout << "front: " << myq.front() << ", back: " << myq.back() << endl;
	cout << "size : " << myq.size() << endl;
	
	myq.push('q');
	myq.push('u');
	myq.push('i');
	myq.push('c');
	myq.push('k');
	
	cout << "front: " << myq.front() << ", back: " << myq.back() << endl;
	cout << "size : " << myq.size() << endl;
	
	while(!myq.empty())
	{
		cout << myq.front();
		myq.pop();
	}
	
	cout << "\nsize : " << myq.size() << endl;
	
	return 0;
}
