/*
������ ����� ��� ã�Ƴ��� �Լ�
get_divisor()�� �ۼ�
8�� �־����� 1,2,4,8�� ȭ�鿡 ���.
*/
#include <iostream>
using namespace std;

void get_divisor(int);

int main() {
	int num;
	char again;

	while (true) {
		cout << "������ �Է��ϼ���: ";
		cin >> num;
		get_divisor(num);

		cout << "Would you like to continue? : \n";
		cin >> again;

		if (again == 'n')
			break;
	}
}
	void get_divisor(int num){
		for(int i = 1; i <= num; i++) {
			if (num % i == 0)
				cout << i << " ";
	}
}

	/*
	cout << "Would you like to continue? : \n";
		cin >> again;

		if (again == y)
			continue;
		else
			break;
	*/