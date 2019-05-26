#include <iostream>
using namespace std;

int function(const int[][5]); //행 생략 가능, 열은 반드시 명기

int main() {
	int s[3][5] = { {0, 1, 2, 3, 4},
					{10, 11, 12, 13, 14},
					{20, 21, 22, 23, 24},
	};
	int total = 0;

	total = function(s);
	cout << "전체 학생들의 평균 성적 = " << total / (3 * 5) << endl;
}
int function(const int s[][5]) {
	int i, j, subtotal, total = 0;

	for (i = 0; i < 3; i++) {
		subtotal = 0;
		for (j = 0; j < 5; j++)
			subtotal += s[i][j];
			cout << "학급 " << i << "의 평균 성적 = " << subtotal / 5 << endl;
			total += subtotal;
	}
		//s[1][1] = 100;
		return total;
}