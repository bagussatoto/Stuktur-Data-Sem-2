#include "queue.h"

Queue::Queue()
{
	_front = 0;
	_back = 0;
}

bool Queue::empty()
{
	return _front == _back;
}

bool Queue::full()
{
	return _back == 50;
}

char Queue::front()
{
	return _elm[_front];
}

char Queue::back()
{
	return _elm[_back - 1];
}

int Queue::size()
{
	return _back - _front;
}

void Queue::push(char e)
{
	if(!full())
	{
		_elm[_back] = e;
		++_back;
	}
}

void Queue::pop()
{
	if(!empty())
	{
		++_front;
	}
}
