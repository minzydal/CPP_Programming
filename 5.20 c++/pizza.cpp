#include <iostream>
using namespace std;

void main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_persons = 0;

	try {
		cout << "���� ���� �� �Է� : ";
		cin >> pizza_slices;
		cout << "��� �� �Է� : ";
		cin >> persons;

		if (persons == 0)
			throw persons;	//catch ����� �Ű������� int Ÿ�� persons ����
		slices_per_persons = pizza_slices / persons;
		cout << slices_per_persons << endl;
	}
	catch (int e) {
		cout << "�����" << e<< "�� �Դϴ�\n";
	}

	//���ܰ� �߻��ϰ� ���� �ʰ� ���� �������� �����Ѵ�. graceful end
	cout << "try, catch�� �̿��� exception handling\n";
	}


