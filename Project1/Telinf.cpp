#include "Telinf.h"

ostream& operator<<(ostream& cout, node& pos) {
	cout << "姓名：" << pos.name << endl;
	cout << "性别：" << pos.sex << endl;
	cout << "家庭电话：" << pos.tel_phone << endl;
	cout << "移动电话：" << pos.mobile << endl;
	cout << "办公电话：" << pos.tel_office << endl;
	cout << "年龄：" << pos.age << endl;
	return cout;
}

string& node::name_out() {
	return name;
}
string& node::sex_out() {
	return sex;
}
string& node::tel_phone_out() {
	return tel_phone;
}
string& node::mobile_out() {
	return mobile;
}
string& node::tel_office_out() {
	return tel_office;
}
int& node::age_out() {
	return age;
}
