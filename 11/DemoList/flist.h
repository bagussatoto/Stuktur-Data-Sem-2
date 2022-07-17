#ifndef _FLIST_H
#define _FLIST_H

// struct Node
// penyusun List
// terdiri dari _elm (penyimpanan data)
//         dan  _next (pointer penunjuk ke Node berikutnya)

struct Node
{
	char _elm;
	Node* _next;	
};

// class ForwardList
class ForwardList
{
public:
	ForwardList();
	void push_front(char e);
	void pop_front();
	void clear();
	bool empty();
	Node* begin();
	~ForwardList();
	
private:
	Node* _begin;
	int   _size;
};

#endif




