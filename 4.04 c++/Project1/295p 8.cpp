//�� ���� ������ �Է¹���
/*
function(n1, n2, sum, diff)
function ��, ��

�հ� ���� ���ÿ� ��ȯ�޴� �Լ��� �ۼ�
void get_sum_diff(int A[], int n, int *p_sum, int *p_diff)
*/

#include <iostream>
using namespace std;

void main() {
	int n1, n2, sum, diff;
	
	cout << "Enter 2 numbers : ";
	cin >> n1 >> n2;
	get_sum_diff(n1, n2, &sum, &diff);

	cout << "Sum : " << sum << endl;
	cout << "Difference :" << diff << endl;
}

void get_sum_diff(int n1, int n2, int *s, int *d) {
	*s = n1 + n2;
	*d = n1 - n2;
}
