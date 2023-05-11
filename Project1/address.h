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
		cout << "-----------欢迎使用！-----------" << endl;
	}
	~address(){
		cout << "-----------感谢使用！-----------" << endl;
	}

private:
	list<node>Telinf;

};