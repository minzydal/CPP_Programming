//함수에서 여러 개의 값을 전달받는 방법

#include <iostream>
using namespace std;

void main() {
	int array[] = { 3, 2, 6, 5, 4 };
	int min, max;

	min_max(array, &min, &max); //min, max의 주소 전달
	cout << "Min : " << min << endl;
	cout << "Max : " << max << endl;
}

void min_max(int a[], int *min, int *max) {
	int i;

	*min = *max = a[0];
	for (i = 1; i < 5; i++) {
		if (*min > a[i])
			*min = a[i];
		if (*max < a[i])
			*max = a[i];
	} //max에 있는 min, max의 주소에 값을 저장
}
