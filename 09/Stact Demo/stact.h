#ifndef _STACK_H
#define _STACK_H
// class Stack

class Stack
{
public:
	Stack();
	void push(char);
	void pop();
	char top();
	int size();
	bool empty();
	bool full();
private:
	char _elm[10];
	int _top;
};


#endif
