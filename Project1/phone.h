#pragma once

#include <bits/stdc++.h>
using namespace std;

class phone {
public:
	phone(string a,string b,string c):tel_phone(a),mobile(b),tel_office(c) {}

protected:
	string tel_phone, mobile, tel_office;
};