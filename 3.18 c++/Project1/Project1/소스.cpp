#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	double value;

	while (true) {
		cout << "�Ǽ����� �Է��Ͻÿ� : ";
		cin >> value;

		if (value < 0.0)
			break; //continue�� ���?
		cout << value << "�� �������� " << sqrt(value) << "�Դϴ�.\n";
		//sqrt ������
	}

}