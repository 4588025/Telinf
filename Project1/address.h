#pragma once

#include"Telinf.h"

class address {

public:
	void  add();
	void  detle();
	void update();
	void search();
	void save();
	void init();
	void Output();
	void cover();
	address(){
		cout << "-----------��ӭʹ�ã�-----------" << endl;
	}
	~address(){
		cout << "-----------��лʹ�ã�-----------" << endl;
	}

private:
	list<node>Telinf;

};