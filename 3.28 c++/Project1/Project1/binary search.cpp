//binary search = ȿ������ �˰��� but ������ �Ǿ��־����

#include <iostream>
using namespace std;

int binary_search(int list[], int , int);

	void main() {
		int key;
			int grade[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; //the number of array = 10

		cout << "Enter key : ";
		cin >> key;

		cout << "Ž�� ��� = " << binary_search(grade, 10, key) << "�� ��" << endl;
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