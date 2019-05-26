//�Լ����� exception ó�� �� ȣ�� �Լ����� ����
#include <iostream>
using namespace std;

int dividePizza();

void main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_persons = 0;

	try {
		cout << "���� ���� �� �Է� : ";
		cin >> pizza_slices;
		cout << "��� �� �Է� : ";
		cin >> persons;

		slices_per_persons = dividePizza(pizza_slices, persons);
		cout << slices_per_persons << endl;
	}
	catch (int e) {
		cout << "�����" << e << "�� �Դϴ�\n";
	}
	cout << "try, catch�� �̿��� exception handling\n";
}

int dividePizza(int ps, int pe) {
	try {
		if (pe == 0)
			throw pe;	//�Լ����� ��ü������ ���� ó��
		return ps / pe;
	}
	catch (int e) {
		cout << e << " : �и�� 0�� �� �� ����\n";
		throw;	//���� ó�� �� ȣ�� �Լ����� ���� ����
	}
}