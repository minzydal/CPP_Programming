#include <iostream>
using namespace std;

extern int sum;	//�ܺ� ���Ͽ� �ִ� ����. ���� ������ extern�� �� �� ����
extern int get_square(int);	//�ܺ� ���Ͽ� �ִ� �Լ�;

void main() {
	int num = 5;

	printf("%d\n", sum);
	cout << get_square(num) << endl;
	cout << sum << endl;
}