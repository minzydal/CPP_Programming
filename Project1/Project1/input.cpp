/*
x�� ���� �Ǽ��� �Է¹޾Ƽ� ���׽��� ���� ����ϴ� ���α׷�
*/
#include <iostream>
#include <cmath> //pow�Լ� ���� ���� cmath������� �������� 
using namespace std;

int main() {
	
	double x, result;
	cout << "x ���� �Է��ϼ��� : ";
	cin >> x;

	result = 3 * pow(x, 3) - 7 * pow(x, 2) + 9;

	cout << "���׽��� ���� " << result << "�Դϴ�.";
}