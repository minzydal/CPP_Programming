/*
inline �Լ� ����
���̰� ª�� �Լ��� ��� �Լ� ȣ�⿡ ���� overhead�� ���� �� �ִ�.
�ٷ� ����
*/

#include <iostream>
using namespace std;

inline double square(double);

void main() {
	cout << square(2.0) << endl; //2.0*2.0���� ġȯ
	cout << square(3.0) << endl; //3.0*3.0���� ġȯ
}
inline double square(double n) { //�Լ� ���ǿ��� inline ���� �� �ִ�.
	return n * n;
}