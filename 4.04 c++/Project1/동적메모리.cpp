#include <iostream>
using namespace std;

void main() {
	int *pi; //�ּҸ� ������ �� �ִ� 4����Ʈ �Ҵ�

	pi = new int; //pi�� �����ϴ� 4����Ʈ �Ҵ�
	cout << pi << " : " << *pi << endl;
	*pi = 100;
	cout << pi << " : " << *pi << endl;

	delete pi; //�޸� ����

	int *ptr = new int[5]; //�����͸� �̿��� �迭 �Ҵ�
						   //�����͸� �迭ó�� ����� �� �ִ�.
	for (int i = 0; i < 5; i++) {
		cout << "Enter number : ";
		cin >> ptr[i];
	}
	pi = ptr;
	for (int i = 0; i < 5; i++) {
		cout << *pi << " ";
		pi++;
	}
	delete[]ptr;
}