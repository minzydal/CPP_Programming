#include <iostream>
using namespace std;

int main() {
	
	int length, width, height; //����, �ʺ�, ����
	int box; //����

	bool sw = true;

	while (1) {
		cout << "������ ũ�⸦ �Է����ּ��� : ";
		cin >> length >> width >> height;

		box = length * width * height;

		if (length > 200 || width > 200 || height > 200) {
				cout << "������ ������ϴ�."; 
		}
		else 
			sw = true;
		cout << "�ڽ��� ũ��� " << length * width * height << "�Դϴ�. " << endl;
		}
	}