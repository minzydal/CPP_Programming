/*
x*3 - 9x + 2  // x <=0
7x +  2x + 0  // x > 0
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double x, result;

	cout << "Please enter the value of X\n";
	cin >> x;

	if (x <= 0.0 )
		result = 7 * pow(x, 2.0) + 2 * x + 0;
	else
		result =  pow(x, 3.0) - 9 * x + 2;

	cout << "result is " << result << endl;

	return 0;
}