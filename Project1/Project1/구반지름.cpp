/*
���� ǥ������ ü���� ���ϴ� ���α׷� �ۼ�
���� �������� �Ǽ��� �Էµ�.
4���̾��߿� ���̴� ���
*/

#include <iostream>
using namespace std;

const double PI = 3.14;

int main() {

	double radius;
	double A, V;
	cout << "���� �������� �Է��ϼ��� : ";
	cin >> radius; //�Է¹��� ������ �б�

	A = 4 * PI * radius * radius;
	V = (4 / 3) * PI * radius * radius * radius;

	cout << "���� ǥ������ " << A << "�Դϴ�. " << endl;
	cout << "���� ���Ǵ� " << V << "�Դϴ�. " << endl;
}