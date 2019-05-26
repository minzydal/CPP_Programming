/*if(a^2 + b^2 == c^2)
count 변수도 같이 사용
각 변의 길이가 100보다 작은 삼각형 
피타고라스의 정리가 성립하는 직각 삼각형이 몇개
3중 반복문.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, c; // 삼각형 세 변의 길이
	int count = 0; //횟수

	for (a = 1; a <= 100; a++)
		for (b = 1; b <= 100; b++)
			for (c = 1; c <= 100; c++)
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) 
					cout << "a = " << a << " b = " << b << " c = " << c << endl;
					count++;
				
}