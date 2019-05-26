// selection sort

#include <iostream>
using namespace std;

void selection_sort(int[], int);
void print(const int[], int); //�Լ����� �迭�� ������ �ٲ��� �ʴ� ���

int main() {
	int grade[5] = { 3, 2, 9, 7, 1 }; 

	cout << "���� �迭\n";
	print(grade, 5);

	selection_sort(grade, 5);

	cout << "���ĵ� �迭\n";
	print(grade, 5);

	return 0;
}

void print(const int list[], int n) {
	for (int i = 0; i < n; i++)
		cout << list[i] << " ";
	cout << endl;
}

void selection_sort(int list[], int n) {
	int temp, min;

	for (int i = 0; i < n - 1; i++) {
		min = i; //i�� ���� �����Ͱ� ���� �۴ٰ� ����
		for (int j = i + 1; j < n; j++) {
			if (list[j] < list[min])
				min = j;
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}