#include <iostream>
using namespace std;

void copy(int[], int[], int); 

void main() {
	int num1[5] = { 1,2, 3, 4, 5 };
	int num2[5];

	cout << sizeof(num1) << endl; // intÇüÀÌ´Ï±î ÃÑ 20byte
	copy(num1, num2, 5);
	for (int i = 0; i < 5; i++)
		cout << num1[i] << " : " << num2[i] << endl;
}
/*
void copy(int n1[], int n2[], int size) {
	cout << sizeof(n1) << endl;
	for (int i = 0; i < size; i++)
		n2[i] = n1[i];
}
*/

void copy(int *n1, int *n2, int size){
	for (int i=0; i <size; i++){
		*n2 = *n1;
		n2++;
		n1++;
	}
}
