#include <iostream>
using namespace std;

const int STUDENTS = 5; //define, �Ϲ������� ����� main �Լ� ������ ����

int main() {
	int grade[STUDENTS];
	/*�����δ� �迭 ũ�� ������ �� ����

	ex ) int num = 5;
	int grade[num]; <- Ʋ��

	*/
	int sum = 0, i, average;

	for (i = 0; i < STUDENTS; i++) 
	{
		cout << "���� �Է� : ";
		cin >> grade[i];
	}

	for (i = 0; i < STUDENTS; i++) 
	
		sum += grade[i];
		average = sum / STUDENTS;

		cout << "��� : " << average << endl;
	

		return 0;
}