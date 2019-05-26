#include <iostream>
using namespace std;

int main() {
	int i, j;
	int sum = 0;

	for (i = 1; i <= 30; i++)
		sum = sum + (i* j + 1);
	printf("Sum : %d\n", sum);

	for (i = 1; i < 30; i++)
		for (j = 1; j < 5; j++)
			sum = sum + (i * j);

	printf("Sum : %d\n", sum);

	return 0;
}

