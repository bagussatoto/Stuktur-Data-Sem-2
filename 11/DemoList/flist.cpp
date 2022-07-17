// implementasi flist.h

#include "flist.h"

ForwardList::ForwardList()
{
	// inisialisasi list dimulai dengan
	// _begin menunjuk ke pointer null (nullptr)
	// dan _size = 0
	
	_begin = nullptr;
	_size = 0;
}

void ForwardList::push_front(char e)
{
	// alokasi memori baru
	Node* _tmp = new Node;
	
	// cek apakah gagal? bila gagal, hentikan
	if(!_tmp)
		return;
		
	// lanjut proses bila alokasi berhasil	
	_tmp->_elm = e;			// simpan data di field _elm
	_tmp->_next = _begin;	// arahkan _next ke arah yg ditunjuk _begin
	_begin = _tmp;			// arahkan _begin ke _tmp
	
	// update informasi size
	++_size;
}

void ForwardList::pop_front()
{
	// cek apakah size 0 (list kosong)? bila 0 hentikan
	if(_size == 0)
		return;
		
	// lanjut proses bila _size tidak 0  
	Node* _tmp = _begin;
	_begin = _begin->_elm;
	
	
	// hapus node paling depan
	delete _tmp;
	
	// update info size
	--_size;
}

void ForwardList::clear()
{
	while(_size > 0)
		pop_front();
}

bool ForwardList::empty()
{
	return _size == 0;
}

Node* ForwardList::begin()
{
	return _begin;
}

ForwardList::~ForwardList()
{
	clear();
}
