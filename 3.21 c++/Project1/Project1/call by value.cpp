/*주소값 %p로 찍음*/

#include <iostream>
using namespace std;

void function(int);

int main() {
	int num = 100;

	function(num); //call by value
	printf("main : %d\n", num);
	printf("main : %d\n", &num);
	return 0;
}
void function(int num) { //call by value
	num *= 10;
	printf("function : %d\n", num);
	printf("main : %p\n", &num);
}