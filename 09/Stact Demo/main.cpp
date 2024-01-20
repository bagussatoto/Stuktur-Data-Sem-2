#include <iostream>
#include "stack.h"

using namespace std;

int main() {
	Stack my_stack;
	
	my_stack.push('t');
	my_stack.push('h');
	my_stack.push('e');
	my_stack.push('q');
	my_stack.push('u');
	my_stack.push('i');
	my_stack.push('c');
	my_stack.push('k');
	my_stack.push('b');
	my_stack.push('r');
	
	while(!my_stack.empty())
	{
		cout << my_stack.top();
		my_stack.pop();
	}
	
	return 0;
}
