//binary search = ȿ������ �˰��� but ������ �Ǿ��־����

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void selection_sort(int[], int);
int binary_search(int list[], int, int);

int main() {
	int grade[10], key;

	srand((unsigned)time(NULL)); //�迭 �ʱ�ȭ
	for (int i = 0; i < 10; i++)
		grade[i] = 1 + rand() % 100;

	selection_sort(grade, 10); //�迭 ���� �� ���
	for (int i = 0; i < 10; i++)
		cout << grade[i] << " ";
	cout << endl;

	cout << "Enter key : ";
	cin >> key;
	cout << "Ž�� ��� = " << binary_search(grade, 10, key) << "�� ��" << endl;

	return 0;
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

int binary_search(int list[], int n, int key) {
	int low = 0, high = n - 1, middle;

	while (low <= high) {
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}