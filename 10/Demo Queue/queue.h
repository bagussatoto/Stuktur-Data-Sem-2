#ifndef _QUEUE_H_
#define _QUEUE_H_

class Queue
{
public:
	Queue();
	void push(char);
	void pop();
	int  size();
	bool empty();
	bool full();
	char front();
	char back();
private:
	char _elm[50];
	int _front;
	int _back;	
};

#endif
