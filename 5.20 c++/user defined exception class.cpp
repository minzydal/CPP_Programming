// ����� ���� ���� Ŭ��

#include <iostream>
using namespace std;

class NoPersonException {	// �Ϲ� Ŭ������ ������ �����ϴ�
	int person;
public :
	NoPersonException(int p = 0) : person(p) { //exception class ������
	}
	int get_person() {
		return person;
	}
};
void main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_persons = 0;

	try {
		cout << "���� ���� �� �Է� : ";
		cin >> pizza_slices;
		cout << "��� �� �Է� : ";
		cin >> persons;

		if (persons <= 0)
			throw NoPersonException(persons);
		// NoPersonException ������ ȣ���Ͽ� ��ü ����

		slices_per_persons = pizza_slices / persons;
		cout << slices_per_persons << endl;
	}
	catch (NoPersonException e) {	//�Ű������� NoPersonException ��ü
		cout << "�����" << e.get_person() << "�� �Դϴ�\n";
	}
	//���ܰ� �߻��ϰ� ���� �ʰ� ���� �������� �����Ѵ�.
	cout << "try, catch�� �̿��� exception handling\n";
}