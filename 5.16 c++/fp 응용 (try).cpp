
#include <iostream>
#include <fstream>
using namespace std;

struct score {	//����ü�� ����Ʈ�� public
	int number;

	char name[30];
	int point;
};
//typedef struct score score; // C style

void main() {
	score grade[] = { {1, "ȫ�浿", 100}, {2, "������", 90}, {3, "������", 80} };
	score g[3];
	score s;
	ofstream os;
	ifstream is;

	os.open("test.bin", ios::binary);

	for (int i = 0; i < 5; i++)
		os.write((char *)grade, sizeof(grade));	
	cout << os.tellp() << endl;
	os.close();

	is.open("test.bin", ios::binary);

	while (1) {
		cout << "���Ͽ��� ��ġ �Է�(0-4, ���� -1) : ";
		cin >> pos;
		if (pos == -1)
			break;
		is.seekg(pos * sizeof(int), ios::beg);
		cout << is.tellg() << endl;
		is.read((char *)&data, sizeof(int));
		cout << pos << "��ġ�� �� : " << data << endl;
		cout << is.tellg() << endl;
	}

	is.seekg(0, ios::end);
	cout << is.tellg() << endl;
	is.seekg(-4, ios::end);
	cout << is.tellg() << endl;
	is.read((char *)&data, sizeof(int));
	cout << data << endl;

	is.close();
}

/*
������ �����͸� �������� ������ 4byte ������ ������ �̵��ؾ� �Ѵ�

	is.seekg(0, ios::end);
	cout << is.tellg() << endl;
	is.seekg(-4, ios::end);
	cout << is.tellg() << endl;
	is.read((char *)&data, sizeof(int));
	cout << data << endl;
*/