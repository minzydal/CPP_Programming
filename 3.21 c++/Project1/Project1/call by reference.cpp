#include <iostream>
using namespace std;

void function(int &);

int main() {
	int num = 100;

	function(num); //call by value
	printf("main : %d\n", num);
	printf("main : %p\n", &num);
	return 0;
}
void function(int &num) { //call by reference
	num *= 10;
	printf("function : %\n", num);
	printf("main : %p\n", &num);
}