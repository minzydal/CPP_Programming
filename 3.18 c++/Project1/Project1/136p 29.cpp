/*if(a^2 + b^2 == c^2)
count ������ ���� ���
�� ���� ���̰� 100���� ���� �ﰢ�� 
��Ÿ����� ������ �����ϴ� ���� �ﰢ���� �
3�� �ݺ���.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, c; // �ﰢ�� �� ���� ����
	int count = 0; //Ƚ��

	for (a = 1; a <= 100; a++)
		for (b = 1; b <= 100; b++)
			for (c = 1; c <= 100; c++)
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) 
					cout << "a = " << a << " b = " << b << " c = " << c << endl;
					count++;
				
}