#include "address.h"
using namespace std;

int main(int argc, char* argv[]) {
	address address;
	list<node>Telinf;
	int choice;
	char ch;
	address.init();
	system("pause");
	system("cls");
	do {
		address.cover();
		cin >> choice;
		switch (choice)
		{
		case 1:
			address.add();
			break;
		case 2:
			address.detle();
			break;
		case 3:
			address.update();
			break;
		case 4:
			address.search();
			break;
		case 5:
			address.Output();
			break;
		default:
			break;
		}
		system("pause");
		cout << "\n\n�������ʹ���������ܣ�������y,������������";
		cin >> ch;
		system("cls");
	} while (ch == 'y');
	address.save();
	return 0;
}


