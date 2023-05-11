#include <bits/stdc++.h>
#include "address.h"
//添加
void  address::add() {
	cout << "请输入姓名，性别，家庭电话，移动电话，办公电话,年龄。（用空格隔开）" << endl;
	string name, sex, tel_phone, mobile, tel_office; int age;
	cin >> name >> sex >> tel_phone >> mobile >> tel_office >> age;
	Telinf.push_back(node(name, sex, tel_phone, mobile, tel_office, age));
	cout << "信息添加成功" << endl;
	return;
}
//删除
void  address::detle() {
	cout << "请输入要删除的姓名" << endl;
	string name; cin >> name;
	auto pos = find(Telinf.begin(), Telinf.end(), node(name));
	if (pos == Telinf.end()) {
		cout << "未查到此姓名" << endl;
	}
	else {
		Telinf.erase(pos);
		cout << "删除成功" << endl;
	}
	return;
}
//修改
void address::update() {
	cout << "请输入要修改的姓名" << endl;
	string name; cin >> name;
	auto pos = find(Telinf.begin(), Telinf.end(), node(name));
	if (pos == Telinf.end()) {
		cout << "未查到此姓名" << endl;
	}
	else {
		cout << "请重新输入数据：" << endl;
		cin >> pos->name_out() >> pos->sex_out() >> pos->tel_phone_out() >> pos->mobile_out() >> pos->tel_office_out() >> pos->age_out();
		cout << "修改成功" << endl;
	}
}
//查找
void address::search() {
	cout << "请输入要查找的姓名" << endl;
	string name; cin >> name;
	auto pos = find(Telinf.begin(), Telinf.end(), node(name));
	if (pos == Telinf.end()) {
		cout << "未查到此姓名" << endl;
		return;
	}
	cout << *pos;

}
//保存
void address::save() {
	ofstream ofs;
	ofs.open("Telinf.txt", ios::out | ios::trunc);
	if (!ofs.is_open()) {
		cout << "----------数据储存失败！----------" << endl;
		return;
	}
	for (auto i : Telinf) {
		ofs << i.name_out() << " " << i.sex_out() << " " << i.tel_phone_out() << " " << i.mobile_out() << " " << i.tel_office_out() << " " << i.age_out() << endl;
	}
	ofs.close();
	cout << "----------数据储存成功！----------" << endl;
}
//初始化
void address::init() {
	ifstream ifs;
	ifs.open("Telinf.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "----------初始化数据失败！----------" << endl;
		return;
	}
	string name, sex, tel_phone, mobile, tel_office;
	int age;//年龄 
	while (ifs >> name) {
		ifs >> sex >> tel_phone >> mobile >> tel_office >> age;
		Telinf.push_back(node(name, sex, tel_phone, mobile, tel_office, age));
	}
	ifs.close();
	cout << "----------初始化数据成功！----------" << endl;
	return;
}
//目录
void address::cover() {
	printf("\t\t通讯录框架\n");
	printf("\t\t 1：添加一条通信信息\n");
	printf("\t\t 2：删除一条通信信息\n");
	printf("\t\t 3：修改一条通信信息\n");
	printf("\t\t 4：查询信息\n");
	printf("\t\t 5：导出到excel\n");
}
//导出
void address::Output() {
	ofstream ofs;
	ofs.open("Telinf.csv", ios::out | ios::trunc);
	if (!ofs.is_open()) {
		cout << "----------数据导出失败！----------" << endl;
		return;
	}
	ofs << "姓名," << "性别," << "家庭电话," << "移动电话," << "办公电话," << "年龄," << endl;
	for (auto i : Telinf) {
		ofs << i.name_out() << "," << i.sex_out() << "," << i.tel_phone_out() << "," << i.mobile_out() << "," << i.tel_office_out() << "," << i.age_out() << endl;
	}
	ofs.close();
	cout << "----------数据导出成功！----------" << endl;
}



