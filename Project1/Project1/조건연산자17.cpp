/*
���ǿ����� ?���� �̿��Ͽ� 2���� ������x, y��ǥ�� �Է¹޾Ƽ� 
�� ��ǥ�� ���ϴ� ��и��� ����ϴ� ���α׷�.
*/
#include <iostream>
using namespace std;

int main() {

	int x, y, quarter;

	cout << "Please enter x and y coordinate : ";
	cin >> x >> y;

	quarter = (x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3); //���� ������ �̿��Ͽ� if-else�� �ڵ� �����ϰ� ǥ��.
	cout << quarter << "��и�\n";

}