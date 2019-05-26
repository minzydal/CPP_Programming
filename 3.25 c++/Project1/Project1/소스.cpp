#include <iostream>
#include <ctime>

using namespace std;

void main() {
	int start, end;

	start = clock();

	for (int i = 0; i < 10000000; i++);

	end = clock();

	cout << (double)(end - start) / CLOCK_PER_SEC << endl << endl;

}