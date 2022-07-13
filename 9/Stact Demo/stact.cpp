// definisi Stack

#include "stack.h"

// constructor

Stack::Stack()
{
	// inisialisasi stack dengan
	// memposisikaan top di index 0
	_top = 0;	
}

// fungsi: empty()
// untuk mengecek apakah stack kosong
// ditandai dengan posisi _top == 0

bool Stack::empty()
{
	return _top == 0;
}

// fungsi: full()
// untuk mengecek apakah stack penuh
// ditandai dengan posisi _top == ukuran array

bool Stack::full()
{
	return _top == 10;
}

// fungsi: size()
// mengetahui jumlah elemen yang tersimpan
// ditandai oleh posisi _top 

int Stack::size()
{
	return _top;
}

// fungsi: push()
// memasukkan elemen ke dalam stack
// dengan syarat stack tidak full

void Stack::push(char e)
{
	if(!full())
	{
		_elm[_top] = e;
		++_top;
	}
}

// fungsi: pop()
// mengeluarkan elemen paling atas
// dengan syarat stack tidak empty

void Stack::pop()
{
	if(!empty())
	{
		--_top;
	}
}

// fungsi: top()
// membaca elemen paling atas
// note: elemen paling atas berada di bawah
// posisi yang ditunjuk oleh _top

char Stack::top()
{
	return _elm[_top - 1];
}

