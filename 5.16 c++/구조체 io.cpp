/*
����ü �������� ���� �����
����ü 1���� �����
*/

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

	os.open("test.bin", ios::binary);	//��� ���� ����

/*	for (int i = 0; i < 3; i++)	//����ü �Ѱ��� ���
	os.write((char *)&grade[i], sizeof(score));*/
	
	os.write((char *)grade, sizeof(grade));	//����ü �迭 ��ü ���

	os.close();

	is.open("test.bin", ios::binary);	//�Է� ���� ����

/*	is.read((char *)&s, sizeof(score));	//����ü �Ѱ��� ���
	while (!is.eof()) {
		cout << s.number << "," << s.name << "," << s.point << endl;
		is.read((char *)&s, sizeof(score));
*/
	is.read((char *)g, sizeof(g));	//����ü �Ѱ��� ���
	for (int i = 0; i < 3; i++)
		cout << g[i].number << "," << g[i].name << "," << g[i].point << endl;
		
	is.close();
}