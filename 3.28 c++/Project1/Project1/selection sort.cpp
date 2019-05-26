// selection sort

#include <iostream>
using namespace std;

void selection_sort(int[], int);
void print(const int[], int); //함수에서 배열의 내용을 바꾸지 않는 경우

int main() {
	int grade[5] = { 3, 2, 9, 7, 1 }; 

	cout << "원래 배열\n";
	print(grade, 5);

	selection_sort(grade, 5);

	cout << "정렬된 배열\n";
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
		min = i; //i번 방의 데이터가 가장 작다고 가정
		for (int j = i + 1; j < n; j++) {
			if (list[j] < list[min])
				min = j;
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}