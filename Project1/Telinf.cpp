#include "Telinf.h"

ostream& operator<<(ostream& cout, node& pos) {
	cout << "������" << pos.name << endl;
	cout << "�Ա�" << pos.sex << endl;
	cout << "��ͥ�绰��" << pos.tel_phone << endl;
	cout << "�ƶ��绰��" << pos.mobile << endl;
	cout << "�칫�绰��" << pos.tel_office << endl;
	cout << "���䣺" << pos.age << endl;
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
