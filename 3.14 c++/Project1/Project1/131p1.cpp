/*
0�� �ƴ� 3���� ��ǥ���� �Է¹޾� �ﰢ���� ���� �� �ִ��� �˻��ϴ� ���α׷�

3���� ���� �� ���ο� ������ �ﰢ���� �� ����
slope1, slope2 ���� 2�� ���� ����

*/
#include <iostream>
using namespace std;

int main() {

	double x1, y1, x2, y2, x3, y3;
	double slope1, slope2, slope3;
	//�Է¹��� x, y��ǥ�� ���� 3�� ���� ����
	
	cout << "x1, y1 �� ��ǥ�� �Է��ϼ���\n";
	cin >> x1 >> y1;
	cout << "x2, y2 �� ��ǥ�� �Է��ϼ���\n";
	cin >> x2 >> y2;
	cout << "x3, y3 �� ��ǥ�� �Է��ϼ���\n";
	cin >> x3 >> y3;

	slope1 = (y1 - y2) / (x1 - x2);
	slope2 = (y1 - y3) / (x1 - x3);
	slope3 = (y2 - y3) / (x2 - x3);
	cout << slope1 << ", " << slope2 << ", " << slope3 << endl;

	if (slope1 == slope2 == slope3) 
		cout << "�ﰢ���� �� �� �����ϴ�.\n";
	else
		cout << "�ﰢ���� ���� �� �ֽ��ϴ�.\n";
	

	return 0;
}