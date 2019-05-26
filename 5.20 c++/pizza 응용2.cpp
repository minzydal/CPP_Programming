//�Լ����� exception ó�� �� ȣ�� �Լ����� ����
#include <iostream>
using namespace std;

int dividePizza(int ps, int pe);

int main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_persons = 0;

	try {
		cout << "���� ���� �� �Է� : ";
		cin >> pizza_slices;
		cout << "��� �� �Է� : ";
		cin >> persons;

		if (persons == 0)
			throw persons;	//catch ����� �Ű������� persons ����
		if (persons < 0)
			throw "negative";	//catch ����� �Ű������� ���ڿ� ����
		slices_per_persons = dividePizza(pizza_slices, persons);
		cout << slices_per_persons << endl;
	}
	catch (int e) {	//�Ű������� int�� �Ѿ� ���� ���
		cout << "�����" << e << "�� �Դϴ�\n";
	}		
	catch (const char *e) {	//�Ű������� ���ڿ��� �Ѿ� ���� ��� // ���ڿ��� �ݵ�� const�� �޾���
		cout << e << "exception �߻� \n";
	}
	catch (...) {
		cout << "Exception\n";
	}
	//���ܰ� �߻��ϰ� ���� �ʰ� ���� �������� �����Ѵ�.
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