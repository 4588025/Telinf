#include <bits/stdc++.h>
#include "address.h"
//���
void  address::add() {
	cout << "�������������Ա𣬼�ͥ�绰���ƶ��绰���칫�绰,���䡣���ÿո������" << endl;
	string name, sex, tel_phone, mobile, tel_office; int age;
	cin >> name >> sex >> tel_phone >> mobile >> tel_office >> age;
	Telinf.push_back(node(name, sex, tel_phone, mobile, tel_office, age));
	cout << "��Ϣ��ӳɹ�" << endl;
	return;
}
//ɾ��
void  address::detle() {
	cout << "������Ҫɾ��������" << endl;
	string name; cin >> name;
	auto pos = find(Telinf.begin(), Telinf.end(), node(name));
	if (pos == Telinf.end()) {
		cout << "δ�鵽������" << endl;
	}
	else {
		Telinf.erase(pos);
		cout << "ɾ���ɹ�" << endl;
	}
	return;
}
//�޸�
void address::update() {
	cout << "������Ҫ�޸ĵ�����" << endl;
	string name; cin >> name;
	auto pos = find(Telinf.begin(), Telinf.end(), node(name));
	if (pos == Telinf.end()) {
		cout << "δ�鵽������" << endl;
	}
	else {
		cout << "�������������ݣ�" << endl;
		cin >> pos->name_out() >> pos->sex_out() >> pos->tel_phone_out() >> pos->mobile_out() >> pos->tel_office_out() >> pos->age_out();
		cout << "�޸ĳɹ�" << endl;
	}
}
//����
void address::search() {
	cout << "������Ҫ���ҵ�����" << endl;
	string name; cin >> name;
	auto pos = find(Telinf.begin(), Telinf.end(), node(name));
	if (pos == Telinf.end()) {
		cout << "δ�鵽������" << endl;
		return;
	}
	cout << *pos;

}
//����
void address::save() {
	ofstream ofs;
	ofs.open("Telinf.txt", ios::out | ios::trunc);
	if (!ofs.is_open()) {
		cout << "----------���ݴ���ʧ�ܣ�----------" << endl;
		return;
	}
	for (auto i : Telinf) {
		ofs << i.name_out() << " " << i.sex_out() << " " << i.tel_phone_out() << " " << i.mobile_out() << " " << i.tel_office_out() << " " << i.age_out() << endl;
	}
	ofs.close();
	cout << "----------���ݴ���ɹ���----------" << endl;
}
//��ʼ��
void address::init() {
	ifstream ifs;
	ifs.open("Telinf.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "----------��ʼ������ʧ�ܣ�----------" << endl;
		return;
	}
	string name, sex, tel_phone, mobile, tel_office;
	int age;//���� 
	while (ifs >> name) {
		ifs >> sex >> tel_phone >> mobile >> tel_office >> age;
		Telinf.push_back(node(name, sex, tel_phone, mobile, tel_office, age));
	}
	ifs.close();
	cout << "----------��ʼ�����ݳɹ���----------" << endl;
	return;
}
//Ŀ¼
void address::cover() {
	printf("\t\tͨѶ¼���\n");
	printf("\t\t 1�����һ��ͨ����Ϣ\n");
	printf("\t\t 2��ɾ��һ��ͨ����Ϣ\n");
	printf("\t\t 3���޸�һ��ͨ����Ϣ\n");
	printf("\t\t 4����ѯ��Ϣ\n");
	printf("\t\t 5��������excel\n");
}
//����
void address::Output() {
	ofstream ofs;
	ofs.open("Telinf.csv", ios::out | ios::trunc);
	if (!ofs.is_open()) {
		cout << "----------���ݵ���ʧ�ܣ�----------" << endl;
		return;
	}
	ofs << "����," << "�Ա�," << "��ͥ�绰," << "�ƶ��绰," << "�칫�绰," << "����," << endl;
	for (auto i : Telinf) {
		ofs << i.name_out() << "," << i.sex_out() << "," << i.tel_phone_out() << "," << i.mobile_out() << "," << i.tel_office_out() << "," << i.age_out() << endl;
	}
	ofs.close();
	cout << "----------���ݵ����ɹ���----------" << endl;
}



