#pragma once
#include"phone.h"

class node:virtual public phone {
private:
	string name, sex;
	int age;//ÄêÁä 
	
public:
	friend ostream& operator<<(ostream& cout, node& p);
	node(string a, string b = "", string c = "", string d = "", string e = "", int f = 0) :name(a), sex(b), phone(c,d,e), age(f) {}
	bool operator==(const node& t)const {
		if (t.name == name)  return 1;
		else return 0;
	}
	string& name_out();
	string& sex_out();
	string& tel_phone_out();
	string& mobile_out();
	string& tel_office_out();
	int& age_out();
};
ostream& operator<<(ostream& cout, node& p);

