#include <iostream>
using namespace std;

void main() {
	int num;
	int *ptr; //���� �޸𸮸� ����Ű�� ������

	cout << "Enter number of data : ";
	cin >> num;

	ptr = new int[num]; //���� �޸� �Ҵ� (dynamic memory allocation)
						//���� �ð��� �ʿ��� �޸� �Ҵ� ���

	int *p = ptr;
	for (int i = 0; i < num; i++) {
		cout << ptr[i] << " " << *p << endl;
		p++;
	}
	delete[] ptr;
}