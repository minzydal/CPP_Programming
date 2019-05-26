//binary search = 효율적인 알고리즘 but 정렬이 되어있어야함

#include <iostream>
using namespace std;

int binary_search(int list[], int , int);

	void main() {
		int key;
			int grade[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; //the number of array = 10

		cout << "Enter key : ";
		cin >> key;

		cout << "탐색 결과 = " << binary_search(grade, 10, key) << "번 방" << endl;
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