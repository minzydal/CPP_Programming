// ������ ����¿����� open�ϴ� ���

#include <iostream>
#include <fstream>
using namespace std;

struct list {
	int num;
	char name[20];
};

int main() {
	list dir;
	fstream f;
	int number;

	f.open("list.bin", ios::binary | ios::out | ios::in);
	while (1) {
		cout << "Enter number(���� -1) : ";
		cin >> dir.num;
		if (dir.num == -1)
			break;
		cin.ignore();
		cout << "Enter name : ";
		cin.getline(dir.name, 20);	// ��ü ���� �Է�
		f.write((char *)&dir, sizeof(dir));
	}

	f.seekg(OL, ios::beg);	//���� �����͸� ó������ �̵�
	/* seekg longŸ�� ����, int �ᵵ ��� x */
	cout << f.tellg() << endl;
	f.read((char *)&dir, sizeof(dir));

	while (!f.eof()) {
		cout << dir.num << ", " << dir.name << endl;
		f.read((char *)&dir, sizeof(dir));
	}
	//f.clear();	//eof�� üũ�ϸ� eofbit�� �����ǰ� ���ķδ� seekg�� �������� �ʴ´�
					//clear() �Լ��� eofbit�� reset�Ѵ�
	f.clear();		//eofbit reset
	f.seekg(OL, ios::beg);	//���� �����͸� ó������ �̵�
	cout << f.tellg() << endl;
	while (1) {
		cout << "Enter number(���� -1) : ";
		cin >> number;
		if (number == -1)
			break;
		f.seekg(number * sizeof(dir), ios::beg);	//���� �����͸� �ش� ���ڵ�� �̵�
		cout << f.tellg() << endl;
		f.read((char *)&dir, sizeof(dir));
		cout << dir.num << ", " << dir.name << endl;
	}
	f.close();
}